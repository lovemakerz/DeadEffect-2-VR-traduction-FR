#!/usr/bin/env bash
set -euo pipefail
mkdir -p out
cp DeadEffect2VR_FR_payload_embedded.ps1 out/payload.bin
cp skin.bmp out/skin.bmp
(
  cd out
  objcopy -I binary -O pe-x86-64 -B i386:x86-64 payload.bin payload.obj
  objcopy -I binary -O pe-x86-64 -B i386:x86-64 skin.bmp skin.obj
)
for n in kernel32 user32 gdi32 advapi32 shell32 ole32 comctl32; do
  lld-link /lib /def:build/$n.def /machine:x64 /out:out/$n.lib
done
clang --target=x86_64-pc-windows-msvc -ffreestanding -fno-builtin -fno-stack-protector -fshort-wchar -Os -c installer.c -o out/installer.obj
clang --target=x86_64-pc-windows-msvc -c build/chkstk.s -o out/chkstk.obj
lld-link /out:out/DeadEffect2VR_FR_Installer_V1.0.0_r3.exe /subsystem:windows /entry:WinMainCRTStartup /stack:8388608,1048576 out/installer.obj out/chkstk.obj out/payload.obj out/skin.obj out/kernel32.lib out/user32.lib out/gdi32.lib out/advapi32.lib out/shell32.lib out/ole32.lib out/comctl32.lib /dynamicbase /nxcompat /highentropyva
