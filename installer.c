/* Dead Effect 2 VR - Traduction FR V1.0.0 - Installateur EXE r3 — skin intégré
   Native Win32 launcher. No CRT required. The validated PowerShell patch payload
   is embedded as binary data and executed hidden from a temporary file.
*/

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef long LONG;
typedef unsigned long long ULONGLONG;
typedef long long LONGLONG;
typedef int BOOL;
typedef unsigned int UINT;
typedef unsigned long long UINT_PTR;
typedef unsigned long long ULONG_PTR;
typedef unsigned long long WPARAM;
typedef long long LPARAM;
typedef long long LRESULT;
typedef void* HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HANDLE HMODULE;
typedef HANDLE HICON;
typedef HANDLE HCURSOR;
typedef HANDLE HBRUSH;
typedef HANDLE HFONT;
typedef HANDLE HPEN;
typedef HANDLE HGDIOBJ;
typedef HANDLE HDC;
typedef HANDLE HMENU;
typedef HANDLE HKEY;
typedef HANDLE PIDLIST_ABSOLUTE;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef unsigned short WCHAR;
typedef WORD ATOM;
typedef WCHAR* LPWSTR;
typedef const WCHAR* LPCWSTR;
typedef char CHAR;
typedef const CHAR* LPCSTR;
typedef DWORD COLORREF;
typedef unsigned long long SIZE_T;

typedef struct { LONG left, top, right, bottom; } RECT;
typedef struct { LONG x, y; } POINT;
typedef struct {
    HDC hdc; BOOL fErase; RECT rcPaint; BOOL fRestore; BOOL fIncUpdate; BYTE rgbReserved[32];
} PAINTSTRUCT;
typedef struct {
    UINT cbSize; UINT style; LRESULT (__stdcall *lpfnWndProc)(HWND,UINT,WPARAM,LPARAM);
    int cbClsExtra; int cbWndExtra; HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor;
    HBRUSH hbrBackground; LPCWSTR lpszMenuName; LPCWSTR lpszClassName; HICON hIconSm;
} WNDCLASSEXW;
typedef struct {
    UINT CtlType; UINT CtlID; UINT itemID; UINT itemAction; UINT itemState;
    HWND hwndItem; HDC hDC; RECT rcItem; ULONG_PTR itemData;
} DRAWITEMSTRUCT;
typedef struct {
    DWORD cb; LPCVOID lpReserved; LPCWSTR lpszClass; LPCWSTR lpszMember; DWORD dwMask; DWORD dwType; DWORD dwState; DWORD dwStateMask; LPCWSTR lpszName; DWORD dwLang; LPCWSTR pszTitle;
} SHELLEXECUTEINFOW_DUMMY;
typedef struct {
    HWND hwndOwner; PIDLIST_ABSOLUTE pidlRoot; LPWSTR pszDisplayName; LPCWSTR lpszTitle; UINT ulFlags;
    int (__stdcall *lpfn)(HWND,UINT,LPARAM,LPARAM); LPARAM lParam; int iImage;
} BROWSEINFOW;
typedef struct { DWORD dwLowDateTime, dwHighDateTime; } FILETIME;
typedef struct { DWORD nLength; LPVOID lpSecurityDescriptor; BOOL bInheritHandle; } SECURITY_ATTRIBUTES;
typedef struct {
    DWORD cb; LPWSTR lpReserved; LPWSTR lpDesktop; LPWSTR lpTitle; DWORD dwX; DWORD dwY; DWORD dwXSize; DWORD dwYSize;
    DWORD dwXCountChars; DWORD dwYCountChars; DWORD dwFillAttribute; DWORD dwFlags; WORD wShowWindow; WORD cbReserved2;
    BYTE* lpReserved2; HANDLE hStdInput; HANDLE hStdOutput; HANDLE hStdError;
} STARTUPINFOW;
typedef struct { HANDLE hProcess; HANDLE hThread; DWORD dwProcessId; DWORD dwThreadId; } PROCESS_INFORMATION;
typedef struct { LONGLONG QuadPart; } LARGE_INTEGER;
typedef struct { DWORD dwSize; DWORD dwICC; } INITCOMMONCONTROLSEX;
typedef struct {
    DWORD biSize; LONG biWidth; LONG biHeight; WORD biPlanes; WORD biBitCount; DWORD biCompression;
    DWORD biSizeImage; LONG biXPelsPerMeter; LONG biYPelsPerMeter; DWORD biClrUsed; DWORD biClrImportant;
} BITMAPINFOHEADER;
typedef struct { BITMAPINFOHEADER bmiHeader; DWORD bmiColors[1]; } BITMAPINFO;

#define TRUE 1
#define FALSE 0
#define NULL ((void*)0)
#define WINAPI __stdcall
#define CALLBACK __stdcall
#define WINAPIV __cdecl
#define INVALID_HANDLE_VALUE ((HANDLE)(LONGLONG)-1)
#define MAX_PATH_W 2048
#define CMD_PATH_W 8192
#define RGBX(r,g,b) ((COLORREF)(((BYTE)(r))|((WORD)((BYTE)(g))<<8)|(((DWORD)(BYTE)(b))<<16)))

#define WS_VISIBLE 0x10000000UL
#define WS_POPUP 0x80000000UL
#define WS_CHILD 0x40000000UL
#define WS_CAPTION 0x00C00000UL
#define WS_SYSMENU 0x00080000UL
#define WS_BORDER 0x00800000UL
#define WS_CLIPCHILDREN 0x02000000UL
#define ES_READONLY 0x0800UL
#define ES_AUTOHSCROLL 0x0080UL
#define BS_OWNERDRAW 0x0000000BUL
#define SS_LEFT 0x00000000UL
#define SS_CENTER 0x00000001UL
#define PBS_SMOOTH 0x01UL
#define SW_SHOW 5
#define SW_SHOWNORMAL 1
#define CW_USEDEFAULT ((int)0x80000000)
#define COLOR_WINDOW 5
#define IDC_ARROW ((LPCWSTR)(ULONG_PTR)32512)
#define IDC_HAND ((LPCWSTR)(ULONG_PTR)32649)

#define WM_DESTROY 0x0002
#define WM_SETCURSOR 0x0020
#define WM_PAINT 0x000F
#define WM_ERASEBKGND 0x0014
#define WM_LBUTTONDOWN 0x0201
#define WM_LBUTTONUP 0x0202
#define WM_KEYDOWN 0x0100
#define WM_NCLBUTTONDOWN 0x00A1
#define WM_CLOSE 0x0010
#define WM_COMMAND 0x0111
#define WM_DRAWITEM 0x002B
#define WM_SETFONT 0x0030
#define WM_CTLCOLORSTATIC 0x0138
#define WM_CTLCOLOREDIT 0x0133
#define WM_APP 0x8000
#define WM_APP_PROGRESS (WM_APP+1)
#define WM_APP_DONE (WM_APP+2)
#define WM_APP_STATUS (WM_APP+3)

#define BN_CLICKED 0
#define ODS_SELECTED 0x0001
#define ODS_DISABLED 0x0004
#define TRANSPARENT 1
#define PS_SOLID 0
#define FW_NORMAL 400
#define FW_SEMIBOLD 600
#define FW_BOLD 700
#define DEFAULT_CHARSET 1
#define OUT_DEFAULT_PRECIS 0
#define CLIP_DEFAULT_PRECIS 0
#define CLEARTYPE_QUALITY 5
#define DEFAULT_PITCH 0
#define FF_DONTCARE 0
#define DT_CENTER 0x00000001
#define DT_VCENTER 0x00000004
#define DT_SINGLELINE 0x00000020
#define DT_LEFT 0x00000000
#define DT_WORDBREAK 0x00000010
#define DT_END_ELLIPSIS 0x00008000
#define HTCAPTION 2
#define VK_ESCAPE 0x1B
#define DIB_RGB_COLORS 0
#define SRCCOPY 0x00CC0020UL
#define MB_YESNO 0x00000004UL
#define MB_ICONERROR 0x00000010UL
#define MB_ICONWARNING 0x00000030UL
#define MB_ICONINFORMATION 0x00000040UL
#define IDYES 6

#define PBM_SETRANGE32 (0x0400+6)
#define PBM_SETPOS (0x0400+2)
#define ICC_PROGRESS_CLASS 0x00000020

#define GENERIC_READ 0x80000000UL
#define GENERIC_WRITE 0x40000000UL
#define FILE_SHARE_READ 0x00000001UL
#define FILE_SHARE_WRITE 0x00000002UL
#define FILE_SHARE_DELETE 0x00000004UL
#define CREATE_ALWAYS 2
#define OPEN_EXISTING 3
#define FILE_ATTRIBUTE_NORMAL 0x00000080UL
#define INVALID_FILE_ATTRIBUTES 0xFFFFFFFFUL
#define FILE_ATTRIBUTE_DIRECTORY 0x00000010UL
#define CREATE_NO_WINDOW 0x08000000UL
#define STARTF_USESTDHANDLES 0x00000100UL
#define STD_INPUT_HANDLE ((DWORD)-10)
#define INFINITE 0xFFFFFFFFUL
#define CP_UTF8 65001
#define HEAP_ZERO_MEMORY 0x00000008UL

#define KEY_READ 0x20019UL
#define KEY_WOW64_32KEY 0x0200UL
#define KEY_WOW64_64KEY 0x0100UL
#define REG_SZ 1
#define REG_EXPAND_SZ 2
#define HKEY_CURRENT_USER ((HKEY)(LONGLONG)(LONG)0x80000001UL)
#define HKEY_LOCAL_MACHINE ((HKEY)(LONGLONG)(LONG)0x80000002UL)

#define BIF_RETURNONLYFSDIRS 0x0001
#define BIF_NEWDIALOGSTYLE 0x0040
#define COINIT_APARTMENTTHREADED 0x2

#define IDC_PATH 1001
#define IDC_BROWSE 1002
#define IDC_INSTALL 1003
#define IDC_UNINSTALL 1004
#define IDC_LOGS 1005
#define IDC_ABOUT 1006
#define IDC_STATUS 1007
#define IDC_PROGRESS 1008
#define IDC_TITLE 1009
#define IDC_SUBTITLE 1010
#define IDC_VERSION 1011

__declspec(dllimport) HMODULE WINAPI GetModuleHandleW(LPCWSTR);
__declspec(dllimport) void WINAPI ExitProcess(UINT);
__declspec(dllimport) DWORD WINAPI GetFileAttributesW(LPCWSTR);
__declspec(dllimport) DWORD WINAPI GetEnvironmentVariableW(LPCWSTR,LPWSTR,DWORD);
__declspec(dllimport) HANDLE WINAPI CreateFileW(LPCWSTR,DWORD,DWORD,SECURITY_ATTRIBUTES*,DWORD,DWORD,HANDLE);
__declspec(dllimport) BOOL WINAPI WriteFile(HANDLE,LPCVOID,DWORD,DWORD*,LPVOID);
__declspec(dllimport) BOOL WINAPI ReadFile(HANDLE,LPVOID,DWORD,DWORD*,LPVOID);
__declspec(dllimport) BOOL WINAPI CloseHandle(HANDLE);
__declspec(dllimport) BOOL WINAPI GetFileSizeEx(HANDLE,LARGE_INTEGER*);
__declspec(dllimport) BOOL WINAPI CreateDirectoryW(LPCWSTR,SECURITY_ATTRIBUTES*);
__declspec(dllimport) BOOL WINAPI DeleteFileW(LPCWSTR);
__declspec(dllimport) BOOL WINAPI CreateProcessW(LPCWSTR,LPWSTR,SECURITY_ATTRIBUTES*,SECURITY_ATTRIBUTES*,BOOL,DWORD,LPVOID,LPCWSTR,STARTUPINFOW*,PROCESS_INFORMATION*);
__declspec(dllimport) DWORD WINAPI WaitForSingleObject(HANDLE,DWORD);
__declspec(dllimport) BOOL WINAPI GetExitCodeProcess(HANDLE,DWORD*);
__declspec(dllimport) HANDLE WINAPI CreateThread(SECURITY_ATTRIBUTES*,SIZE_T,DWORD (WINAPI*)(LPVOID),LPVOID,DWORD,DWORD*);
__declspec(dllimport) DWORD WINAPI GetCurrentProcessId(void);
__declspec(dllimport) DWORD WINAPI GetLastError(void);
__declspec(dllimport) int WINAPI MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
__declspec(dllimport) HANDLE WINAPI GetProcessHeap(void);
__declspec(dllimport) LPVOID WINAPI HeapAlloc(HANDLE,DWORD,SIZE_T);
__declspec(dllimport) BOOL WINAPI HeapFree(HANDLE,DWORD,LPVOID);
__declspec(dllimport) HANDLE WINAPI GetStdHandle(DWORD);
__declspec(dllimport) DWORD WINAPI GetLogicalDrives(void);
__declspec(dllimport) LPWSTR WINAPI lstrcpyW(LPWSTR,LPCWSTR);
__declspec(dllimport) LPWSTR WINAPI lstrcatW(LPWSTR,LPCWSTR);
__declspec(dllimport) int WINAPI lstrlenW(LPCWSTR);

__declspec(dllimport) int WINAPI MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);
__declspec(dllimport) ATOM WINAPI RegisterClassExW(const WNDCLASSEXW*);
__declspec(dllimport) HWND WINAPI CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
__declspec(dllimport) LRESULT WINAPI DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) BOOL WINAPI ShowWindow(HWND,int);
__declspec(dllimport) BOOL WINAPI UpdateWindow(HWND);
__declspec(dllimport) BOOL WINAPI GetMessageW(LPVOID,HWND,UINT,UINT);
__declspec(dllimport) BOOL WINAPI TranslateMessage(const LPVOID);
__declspec(dllimport) LRESULT WINAPI DispatchMessageW(const LPVOID);
__declspec(dllimport) void WINAPI PostQuitMessage(int);
__declspec(dllimport) HCURSOR WINAPI LoadCursorW(HINSTANCE,LPCWSTR);
__declspec(dllimport) BOOL WINAPI SetWindowTextW(HWND,LPCWSTR);
__declspec(dllimport) int WINAPI GetWindowTextW(HWND,LPWSTR,int);
__declspec(dllimport) BOOL WINAPI EnableWindow(HWND,BOOL);
__declspec(dllimport) LRESULT WINAPI SendMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) BOOL WINAPI PostMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) BOOL WINAPI GetClientRect(HWND,RECT*);
__declspec(dllimport) HDC WINAPI BeginPaint(HWND,PAINTSTRUCT*);
__declspec(dllimport) BOOL WINAPI EndPaint(HWND,const PAINTSTRUCT*);
__declspec(dllimport) int WINAPI FillRect(HDC,const RECT*,HBRUSH);
__declspec(dllimport) int WINAPI DrawTextW(HDC,LPCWSTR,int,RECT*,UINT);
__declspec(dllimport) BOOL WINAPI InvalidateRect(HWND,const RECT*,BOOL);
__declspec(dllimport) int WINAPI GetSystemMetrics(int);
__declspec(dllimport) BOOL WINAPI GetCursorPos(POINT*);
__declspec(dllimport) BOOL WINAPI ScreenToClient(HWND,POINT*);
__declspec(dllimport) HCURSOR WINAPI SetCursor(HCURSOR);
__declspec(dllimport) BOOL WINAPI DestroyWindow(HWND);
__declspec(dllimport) BOOL WINAPI GetWindowRect(HWND,RECT*);
__declspec(dllimport) BOOL WINAPI ReleaseCapture(void);
__declspec(dllimport) BOOL WINAPI SetForegroundWindow(HWND);
__declspec(dllimport) BOOL WINAPI SetProcessDPIAware(void);
__declspec(dllimport) int WINAPIV wsprintfW(LPWSTR,LPCWSTR,...);

__declspec(dllimport) HBRUSH WINAPI CreateSolidBrush(COLORREF);
__declspec(dllimport) HPEN WINAPI CreatePen(int,int,COLORREF);
__declspec(dllimport) HGDIOBJ WINAPI SelectObject(HDC,HGDIOBJ);
__declspec(dllimport) BOOL WINAPI DeleteObject(HGDIOBJ);
__declspec(dllimport) COLORREF WINAPI SetTextColor(HDC,COLORREF);
__declspec(dllimport) COLORREF WINAPI SetBkColor(HDC,COLORREF);
__declspec(dllimport) int WINAPI SetBkMode(HDC,int);
__declspec(dllimport) BOOL WINAPI Rectangle(HDC,int,int,int,int);
__declspec(dllimport) HFONT WINAPI CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
__declspec(dllimport) int WINAPI StretchDIBits(HDC,int,int,int,int,int,int,int,int,const void*,const BITMAPINFO*,UINT,DWORD);

__declspec(dllimport) LONG WINAPI RegOpenKeyExW(HKEY,LPCWSTR,DWORD,DWORD,HKEY*);
__declspec(dllimport) LONG WINAPI RegQueryValueExW(HKEY,LPCWSTR,DWORD*,DWORD*,BYTE*,DWORD*);
__declspec(dllimport) LONG WINAPI RegCloseKey(HKEY);

__declspec(dllimport) PIDLIST_ABSOLUTE WINAPI SHBrowseForFolderW(BROWSEINFOW*);
__declspec(dllimport) BOOL WINAPI SHGetPathFromIDListW(PIDLIST_ABSOLUTE,LPWSTR);
__declspec(dllimport) HANDLE WINAPI ShellExecuteW(HWND,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,int);

__declspec(dllimport) LONG WINAPI CoInitializeEx(LPVOID,DWORD);
__declspec(dllimport) void WINAPI CoUninitialize(void);
__declspec(dllimport) void WINAPI CoTaskMemFree(LPVOID);
__declspec(dllimport) BOOL WINAPI InitCommonControlsEx(const INITCOMMONCONTROLSEX*);

extern unsigned char _binary_payload_bin_start[];
extern unsigned char _binary_payload_bin_end[];
extern unsigned char _binary_skin_bmp_start[];
extern unsigned char _binary_skin_bmp_end[];

static HINSTANCE gInst;
static HWND gWnd=0,gAboutWnd=0;
static HFONT gPathFont=0,gAboutTitleFont=0,gAboutHeadFont=0,gAboutBodyFont=0,gAboutCloseFont=0;
static HCURSOR gArrow=0,gHand=0;
static volatile LONG gBusy=0;
static int gMode=0;
static int gProgressValue=0;
static WCHAR gSelected[MAX_PATH_W];
static WCHAR gReportBase[MAX_PATH_W];
static WCHAR gGuiLog[MAX_PATH_W];
static WCHAR gScriptPath[MAX_PATH_W];
static WCHAR gPowerShell[MAX_PATH_W];
static WCHAR gCommand[CMD_PATH_W];
static WCHAR gWorkerGame[MAX_PATH_W];

#define MAIN_W 1200
#define MAIN_H 800
#define ABOUT_W 820
#define ABOUT_H 470

enum { HIT_NONE=0, HIT_CLOSE=1, HIT_ABOUT=2, HIT_BROWSE=3, HIT_INSTALL=4, HIT_UNINSTALL=5 };

static void memzero(void* p, SIZE_T n){ BYTE* b=(BYTE*)p; while(n--) *b++=0; }
static int streqi_ascii(const char* a,const char* b){ while(*a&&*b){char x=*a,y=*b;if(x>='A'&&x<='Z')x+=32;if(y>='A'&&y<='Z')y+=32;if(x!=y)return 0;a++;b++;}return *a==*b; }
static int file_exists(LPCWSTR p){ DWORD a=GetFileAttributesW(p); return a!=INVALID_FILE_ATTRIBUTES && !(a&FILE_ATTRIBUTE_DIRECTORY); }
static int dir_exists(LPCWSTR p){ DWORD a=GetFileAttributesW(p); return a!=INVALID_FILE_ATTRIBUTES && (a&FILE_ATTRIBUTE_DIRECTORY); }
static void join_path(WCHAR* out,LPCWSTR a,LPCWSTR b){ lstrcpyW(out,a); int n=lstrlenW(out); if(n>0 && out[n-1]!=L'\\' && out[n-1]!=L'/') lstrcatW(out,L"\\"); lstrcatW(out,b); }
static void copy_n_w(WCHAR* out,LPCWSTR in,int cap){int i=0;if(cap<=0)return;while(in&&in[i]&&i<cap-1){out[i]=in[i];i++;}out[i]=0;}

static int test_game_folder(LPCWSTR root){
    WCHAR p[MAX_PATH_W];
    if(!root||!root[0]||!dir_exists(root)) return 0;
    join_path(p,root,L"DeadEffect2_Data\\resources.assets"); if(!file_exists(p)) return 0;
    join_path(p,root,L"DeadEffect2_Data\\Managed\\Assembly-CSharp.dll"); if(!file_exists(p)) return 0;
    return 1;
}

static int read_text_file(LPCWSTR path,char** out,DWORD* outLen){
    HANDLE h=CreateFileW(path,GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);
    LARGE_INTEGER sz; DWORD got=0; char* b;
    if(h==INVALID_HANDLE_VALUE) return 0;
    if(!GetFileSizeEx(h,&sz)||sz.QuadPart<=0||sz.QuadPart>8*1024*1024){CloseHandle(h);return 0;}
    b=(char*)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(SIZE_T)sz.QuadPart+1); if(!b){CloseHandle(h);return 0;}
    if(!ReadFile(h,b,(DWORD)sz.QuadPart,&got,NULL)){HeapFree(GetProcessHeap(),0,b);CloseHandle(h);return 0;}
    CloseHandle(h); b[got]=0; *out=b; *outLen=got; return 1;
}
static int find_token(const char* b,DWORD n,const char* tok,DWORD start){
    DWORD t=0,i,j; while(tok[t])t++; if(t==0||n<t)return -1;
    for(i=start;i+t<=n;i++){for(j=0;j<t;j++)if(b[i+j]!=tok[j])break;if(j==t)return (int)i;} return -1;
}
static int extract_quoted_value(const char* b,DWORD n,const char* key,DWORD start,char* out,int cap,DWORD* next){
    int p=find_token(b,n,key,start); DWORD i,j=0,k=0; if(p<0)return 0; while(key[k])k++; i=(DWORD)p+k;
    while(i<n&&b[i]!='\"')i++; if(i>=n)return 0; i++; /* opening quote of the value */
    while(i<n&&b[i]!='\"'&&j<(DWORD)(cap-1)){ if(b[i]=='\\'&&i+1<n&&b[i+1]=='\\'){out[j++]='\\';i+=2;} else out[j++]=b[i++]; }
    out[j]=0; if(next)*next=i+1; return j>0;
}
static int utf8_to_wide(const char* s,WCHAR* out,int cap){int n=0;while(s[n])n++;if(n==0){out[0]=0;return 0;}int r=MultiByteToWideChar(CP_UTF8,0,s,n,out,cap-1);if(r<=0){out[0]=0;return 0;}out[r]=0;return r;}

static int try_library_root(LPCWSTR lib,WCHAR* out){
    WCHAR game[MAX_PATH_W], manifest[MAX_PATH_W];
    char* txt=0; DWORD len=0,pos=0; char val[1024]; WCHAR install[1024];
    join_path(game,lib,L"steamapps\\common\\Dead Effect 2 VR"); if(test_game_folder(game)){copy_n_w(out,game,MAX_PATH_W);return 1;}
    join_path(manifest,lib,L"steamapps\\appmanifest_646200.acf");
    if(read_text_file(manifest,&txt,&len)){
        if(extract_quoted_value(txt,len,"\"installdir\"",0,val,1024,&pos) && utf8_to_wide(val,install,1024)){
            WCHAR common[MAX_PATH_W]; join_path(common,lib,L"steamapps\\common"); join_path(game,common,install);
            if(test_game_folder(game)){copy_n_w(out,game,MAX_PATH_W);HeapFree(GetProcessHeap(),0,txt);return 1;}
        }
        HeapFree(GetProcessHeap(),0,txt);
    }
    return 0;
}

static int scan_library_vdf(LPCWSTR steamRoot,WCHAR* out){
    WCHAR vdf[MAX_PATH_W]; char* txt=0; DWORD len=0,start=0,next=0; char val[1024]; WCHAR lib[MAX_PATH_W];
    join_path(vdf,steamRoot,L"steamapps\\libraryfolders.vdf"); if(!read_text_file(vdf,&txt,&len))return 0;
    while(start<len && extract_quoted_value(txt,len,"\"path\"",start,val,1024,&next)){
        if(utf8_to_wide(val,lib,MAX_PATH_W) && try_library_root(lib,out)){HeapFree(GetProcessHeap(),0,txt);return 1;}
        if(next<=start)break; start=next;
    }
    HeapFree(GetProcessHeap(),0,txt); return 0;
}

static int query_reg_path(HKEY root,LPCWSTR sub,LPCWSTR name,DWORD flags,WCHAR* out){
    HKEY k=0; DWORD type=0,cb=(DWORD)(MAX_PATH_W*sizeof(WCHAR));
    if(RegOpenKeyExW(root,sub,0,KEY_READ|flags,&k)!=0)return 0;
    if(RegQueryValueExW(k,name,NULL,&type,(BYTE*)out,&cb)!=0 || (type!=REG_SZ&&type!=REG_EXPAND_SZ)){RegCloseKey(k);return 0;}
    RegCloseKey(k); out[MAX_PATH_W-1]=0; return out[0]!=0;
}
static int try_steam_root(LPCWSTR root,WCHAR* out){ if(!root||!root[0])return 0; if(try_library_root(root,out))return 1; return scan_library_vdf(root,out); }

static int detect_game(WCHAR* out){
    WCHAR root[MAX_PATH_W],pf[MAX_PATH_W]; DWORD drives; int i;
    out[0]=0;
    if(query_reg_path(HKEY_CURRENT_USER,L"Software\\Valve\\Steam",L"SteamPath",0,root) && try_steam_root(root,out)) return 1;
    if(query_reg_path(HKEY_LOCAL_MACHINE,L"SOFTWARE\\WOW6432Node\\Valve\\Steam",L"InstallPath",KEY_WOW64_32KEY,root) && try_steam_root(root,out)) return 1;
    if(query_reg_path(HKEY_LOCAL_MACHINE,L"SOFTWARE\\Valve\\Steam",L"InstallPath",KEY_WOW64_64KEY,root) && try_steam_root(root,out)) return 1;
    if(GetEnvironmentVariableW(L"ProgramFiles(x86)",pf,MAX_PATH_W)){join_path(root,pf,L"Steam");if(try_steam_root(root,out))return 1;}
    drives=GetLogicalDrives();
    for(i=0;i<26;i++) if(drives&(1UL<<i)){
        root[0]=(WCHAR)(L'A'+i);root[1]=L':';root[2]=L'\\';root[3]=0;
        lstrcatW(root,L"SteamLibrary"); if(try_steam_root(root,out))return 1;
        root[0]=(WCHAR)(L'A'+i);root[1]=L':';root[2]=L'\\';root[3]=0;
        lstrcatW(root,L"Steam"); if(try_steam_root(root,out))return 1;
    }
    return 0;
}

static void ensure_report_dirs(void){
    WCHAR local[MAX_PATH_W],a[MAX_PATH_W],b[MAX_PATH_W];
    if(!GetEnvironmentVariableW(L"LOCALAPPDATA",local,MAX_PATH_W)) GetEnvironmentVariableW(L"TEMP",local,MAX_PATH_W);
    join_path(a,local,L"LoVeMaKeRz"); CreateDirectoryW(a,NULL);
    join_path(b,a,L"DeadEffect2VR_FR"); CreateDirectoryW(b,NULL);
    copy_n_w(gReportBase,b,MAX_PATH_W); join_path(gGuiLog,b,L"installer_gui.log");
}

static int write_payload(LPCWSTR path){
    HANDLE h; DWORD wrote=0; DWORD size=(DWORD)(_binary_payload_bin_end-_binary_payload_bin_start);
    h=CreateFileW(path,GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL); if(h==INVALID_HANDLE_VALUE)return 0;
    if(!WriteFile(h,_binary_payload_bin_start,size,&wrote,NULL)||wrote!=size){CloseHandle(h);return 0;} CloseHandle(h); return 1;
}

static void set_busy(BOOL busy){gBusy=busy;InvalidateRect(gWnd,NULL,FALSE);}
static RECT path_rect(void){RECT r={170,511,842,556};return r;}
static void invalidate_path(void){RECT r={158,500,850,562};InvalidateRect(gWnd,&r,FALSE);}

static DWORD WINAPI worker(LPVOID param){
    int mode=(int)(ULONG_PTR)param; WCHAR temp[MAX_PATH_W],systemRoot[MAX_PATH_W];
    SECURITY_ATTRIBUTES sa; STARTUPINFOW si; PROCESS_INFORMATION pi; HANDLE log; DWORD exitCode=9999; DWORD pid=GetCurrentProcessId();
    memzero(&sa,sizeof(sa));memzero(&si,sizeof(si));memzero(&pi,sizeof(pi));
    PostMessageW(gWnd,WM_APP_PROGRESS,15,0);
    if(!GetEnvironmentVariableW(L"TEMP",temp,MAX_PATH_W)){PostMessageW(gWnd,WM_APP_DONE,9001,mode);return 0;}
    wsprintfW(gScriptPath,L"%s\\DE2FR_V1.0.0_%lu.ps1",temp,pid);
    if(!write_payload(gScriptPath)){PostMessageW(gWnd,WM_APP_DONE,9002,mode);return 0;}
    PostMessageW(gWnd,WM_APP_PROGRESS,30,0);
    if(!GetEnvironmentVariableW(L"SystemRoot",systemRoot,MAX_PATH_W)){DeleteFileW(gScriptPath);PostMessageW(gWnd,WM_APP_DONE,9003,mode);return 0;}
    join_path(gPowerShell,systemRoot,L"System32\\WindowsPowerShell\\v1.0\\powershell.exe");
    if(!file_exists(gPowerShell)){DeleteFileW(gScriptPath);PostMessageW(gWnd,WM_APP_DONE,9004,mode);return 0;}
    wsprintfW(gCommand,L"\"%s\" -NoLogo -NoProfile -NonInteractive -ExecutionPolicy Bypass -File \"%s\" -Mode %s -GamePath \"%s\"",gPowerShell,gScriptPath,mode==1?L"Install":L"Restore",gWorkerGame);
    sa.nLength=sizeof(sa);sa.lpSecurityDescriptor=NULL;sa.bInheritHandle=TRUE;
    log=CreateFileW(gGuiLog,GENERIC_WRITE,FILE_SHARE_READ,&sa,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
    if(log==INVALID_HANDLE_VALUE){DeleteFileW(gScriptPath);PostMessageW(gWnd,WM_APP_DONE,9005,mode);return 0;}
    si.cb=sizeof(si);si.dwFlags=STARTF_USESTDHANDLES;si.hStdOutput=log;si.hStdError=log;si.hStdInput=GetStdHandle(STD_INPUT_HANDLE);
    PostMessageW(gWnd,WM_APP_PROGRESS,45,0);
    if(!CreateProcessW(gPowerShell,gCommand,NULL,NULL,TRUE,CREATE_NO_WINDOW,NULL,NULL,&si,&pi)){
        CloseHandle(log);DeleteFileW(gScriptPath);PostMessageW(gWnd,WM_APP_DONE,10000+GetLastError(),mode);return 0;
    }
    CloseHandle(pi.hThread);PostMessageW(gWnd,WM_APP_PROGRESS,65,0);
    WaitForSingleObject(pi.hProcess,INFINITE);GetExitCodeProcess(pi.hProcess,&exitCode);CloseHandle(pi.hProcess);CloseHandle(log);DeleteFileW(gScriptPath);
    PostMessageW(gWnd,WM_APP_PROGRESS,exitCode==0?100:0,0);PostMessageW(gWnd,WM_APP_DONE,exitCode,mode);return 0;
}

static void launch_action(int mode){
    DWORD tid; HANDLE th;
    if(gBusy)return;
    if(!test_game_folder(gSelected)){
        MessageBoxW(gWnd,L"Le dossier sélectionné n'est pas une installation valide de Dead Effect 2 VR.\n\nUtilisez « Parcourir » puis sélectionnez le dossier racine du jeu Steam.",L"Dead Effect 2 VR — Traduction française",MB_ICONWARNING);
        return;
    }
    copy_n_w(gWorkerGame,gSelected,MAX_PATH_W);gMode=mode;gProgressValue=5;set_busy(TRUE);invalidate_path();
    th=CreateThread(NULL,0,worker,(LPVOID)(ULONG_PTR)mode,0,&tid);
    if(!th){gProgressValue=0;set_busy(FALSE);MessageBoxW(gWnd,L"Impossible de démarrer l'opération.",L"Dead Effect 2 VR — Traduction française",MB_ICONERROR);return;}
    CloseHandle(th);
}

static void browse_game(void){
    BROWSEINFOW bi; WCHAR display[260],chosen[MAX_PATH_W]; PIDLIST_ABSOLUTE pidl;
    if(gBusy)return;
    memzero(&bi,sizeof(bi));memzero(display,sizeof(display));
    bi.hwndOwner=gWnd;bi.pszDisplayName=display;bi.lpszTitle=L"Sélectionnez le dossier Steam de Dead Effect 2 VR";bi.ulFlags=BIF_RETURNONLYFSDIRS|BIF_NEWDIALOGSTYLE;
    pidl=SHBrowseForFolderW(&bi);if(!pidl)return;
    chosen[0]=0;
    if(SHGetPathFromIDListW(pidl,chosen)){
        if(test_game_folder(chosen)){copy_n_w(gSelected,chosen,MAX_PATH_W);invalidate_path();}
        else MessageBoxW(gWnd,L"Ce dossier ne contient pas DeadEffect2_Data\\resources.assets.\n\nSélectionnez le dossier racine de Dead Effect 2 VR.",L"Dossier incorrect",MB_ICONWARNING);
    }
    CoTaskMemFree(pidl);
}

static void open_logs(void){ensure_report_dirs();ShellExecuteW(gWnd,L"open",L"explorer.exe",gReportBase,NULL,SW_SHOWNORMAL);}

static DWORD rd32le(const unsigned char* p){return (DWORD)p[0]|((DWORD)p[1]<<8)|((DWORD)p[2]<<16)|((DWORD)p[3]<<24);}
static int pt_in(POINT p,int l,int t,int r,int b){return p.x>=l&&p.x<=r&&p.y>=t&&p.y<=b;}

static int main_hit(POINT p){
    if(pt_in(p,1130,5,1189,54)) return HIT_CLOSE;
    if(!gBusy && pt_in(p,982,59,1154,119)) return HIT_ABOUT;
    if(!gBusy && pt_in(p,853,501,1045,563)) return HIT_BROWSE;
    if(!gBusy && pt_in(p,126,575,582,700)) return HIT_INSTALL;
    if(!gBusy && pt_in(p,619,575,1075,700)) return HIT_UNINSTALL;
    return HIT_NONE;
}

static void draw_skin(HDC dc){
    const unsigned char* bmp=_binary_skin_bmp_start;
    DWORD total=(DWORD)(_binary_skin_bmp_end-_binary_skin_bmp_start);
    DWORD off;
    BITMAPINFO* bi;
    if(total<54)return;
    off=rd32le(bmp+10); if(off>=total)return;
    bi=(BITMAPINFO*)(bmp+14);
    StretchDIBits(dc,0,0,MAIN_W,MAIN_H,0,0,bi->bmiHeader.biWidth,bi->bmiHeader.biHeight,bmp+off,bi,DIB_RGB_COLORS,SRCCOPY);
}

static void draw_path_area(HDC dc){
    RECT r=path_rect(); WCHAR text[MAX_PATH_W+128]; HGDIOBJ old; HBRUSH b;
    SetBkMode(dc,TRANSPARENT); old=SelectObject(dc,gPathFont);
    if(gBusy){
        wsprintfW(text,gMode==1?L"Installation de la traduction…  %d %%":L"Désinstallation de la traduction…  %d %%",gProgressValue);
        SetTextColor(dc,gMode==1?RGBX(220,244,255):RGBX(255,224,224));
    } else if(gSelected[0]){
        copy_n_w(text,gSelected,MAX_PATH_W+128); SetTextColor(dc,RGBX(234,245,252));
    } else {
        copy_n_w(text,L"Jeu non détecté — utilisez Parcourir",MAX_PATH_W+128); SetTextColor(dc,RGBX(245,206,119));
    }
    DrawTextW(dc,text,-1,&r,DT_LEFT|DT_VCENTER|DT_SINGLELINE|DT_END_ELLIPSIS);
    SelectObject(dc,old);
    if(gBusy){
        RECT pr={166,553,166+(int)(676*gProgressValue/100),557};
        b=CreateSolidBrush(gMode==1?RGBX(37,202,255):RGBX(255,70,70)); FillRect(dc,&pr,b); DeleteObject(b);
    }
}

static void about_fill(HDC dc,int l,int t,int r,int b,COLORREF c){
    RECT rr; HBRUSH br;
    rr.left=l; rr.top=t; rr.right=r; rr.bottom=b;
    br=CreateSolidBrush(c); FillRect(dc,&rr,br); DeleteObject(br);
}

static void draw_about(HDC dc){
    RECT r; HGDIOBJ oldf;

    /* Fond et panneau principal : aucun contrôle Windows blanc. */
    about_fill(dc,0,0,ABOUT_W,ABOUT_H,RGBX(4,8,12));
    about_fill(dc,5,5,ABOUT_W-5,ABOUT_H-5,RGBX(12,18,24));

    /* Cadre sci-fi en couches, inspiré du skin principal. */
    about_fill(dc,8,8,ABOUT_W-8,11,RGBX(116,132,143));
    about_fill(dc,8,ABOUT_H-11,ABOUT_W-8,ABOUT_H-8,RGBX(116,132,143));
    about_fill(dc,8,8,11,ABOUT_H-8,RGBX(116,132,143));
    about_fill(dc,ABOUT_W-11,8,ABOUT_W-8,ABOUT_H-8,RGBX(116,132,143));

    about_fill(dc,13,13,ABOUT_W/2-18,17,RGBX(40,184,238));
    about_fill(dc,ABOUT_W/2+18,13,ABOUT_W-13,17,RGBX(201,48,50));
    about_fill(dc,13,ABOUT_H-17,ABOUT_W/2-18,ABOUT_H-13,RGBX(25,128,181));
    about_fill(dc,ABOUT_W/2+18,ABOUT_H-17,ABOUT_W-13,ABOUT_H-13,RGBX(154,38,42));

    /* Zone de contenu sombre et quelques accents métalliques. */
    about_fill(dc,20,24,ABOUT_W-20,ABOUT_H-24,RGBX(8,17,24));
    about_fill(dc,20,24,24,ABOUT_H-24,RGBX(24,111,149));
    about_fill(dc,ABOUT_W-24,24,ABOUT_W-20,ABOUT_H-24,RGBX(119,35,38));
    about_fill(dc,36,82,ABOUT_W-36,84,RGBX(44,90,112));
    about_fill(dc,36,171,ABOUT_W-36,173,RGBX(37,61,73));
    about_fill(dc,36,303,ABOUT_W-36,305,RGBX(37,61,73));

    SetBkMode(dc,TRANSPARENT);

    oldf=SelectObject(dc,gAboutTitleFont);
    SetTextColor(dc,RGBX(224,245,255));
    r.left=42;r.top=34;r.right=ABOUT_W-105;r.bottom=72;
    DrawTextW(dc,L"À propos",-1,&r,DT_LEFT|DT_SINGLELINE);
    SelectObject(dc,oldf);

    oldf=SelectObject(dc,gAboutHeadFont);
    SetTextColor(dc,RGBX(247,250,252));
    r.left=42;r.top=101;r.right=ABOUT_W-42;r.bottom=128;
    DrawTextW(dc,L"Dead Effect 2 VR — Traduction française non officielle",-1,&r,DT_LEFT|DT_SINGLELINE);
    SetTextColor(dc,RGBX(82,211,255));
    r.top=134;r.bottom=162;
    DrawTextW(dc,L"Traduction française réalisée par LoVeMaKeRz",-1,&r,DT_LEFT|DT_SINGLELINE);
    SelectObject(dc,oldf);

    oldf=SelectObject(dc,gAboutBodyFont);
    SetTextColor(dc,RGBX(220,230,237));
    r.left=42;r.top=194;r.right=ABOUT_W-42;r.bottom=286;
    DrawTextW(dc,L"Projet communautaire gratuit et non affilié, approuvé ou sponsorisé par les détenteurs des droits de Dead Effect 2 VR. Dead Effect 2 VR, ses marques, personnages, visuels et autres éléments associés restent la propriété de leurs détenteurs respectifs.",-1,&r,DT_LEFT|DT_WORDBREAK);
    SetTextColor(dc,RGBX(233,238,242));
    r.top=329;r.bottom=404;
    DrawTextW(dc,L"Ce patch nécessite une copie légitime de Dead Effect 2 VR et ne contient pas le jeu original.",-1,&r,DT_LEFT|DT_WORDBREAK);
    SelectObject(dc,oldf);

    /* Bouton fermer dessiné à la main : pas de Rectangle() qui remplisse en blanc. */
    about_fill(dc,ABOUT_W-76,28,ABOUT_W-28,70,RGBX(45,12,15));
    about_fill(dc,ABOUT_W-76,28,ABOUT_W-28,30,RGBX(236,89,76));
    about_fill(dc,ABOUT_W-76,68,ABOUT_W-28,70,RGBX(236,89,76));
    about_fill(dc,ABOUT_W-76,28,ABOUT_W-74,70,RGBX(236,89,76));
    about_fill(dc,ABOUT_W-30,28,ABOUT_W-28,70,RGBX(236,89,76));
    about_fill(dc,ABOUT_W-72,32,ABOUT_W-32,66,RGBX(88,19,22));

    oldf=SelectObject(dc,gAboutCloseFont);
    SetTextColor(dc,RGBX(255,229,222));
    r.left=ABOUT_W-72;r.top=28;r.right=ABOUT_W-32;r.bottom=68;
    DrawTextW(dc,L"×",-1,&r,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
    SelectObject(dc,oldf);
}

static LRESULT CALLBACK aboutproc(HWND h,UINT m,WPARAM w,LPARAM l){
    if(m==WM_ERASEBKGND)return 1;
    if(m==WM_PAINT){PAINTSTRUCT ps;HDC dc=BeginPaint(h,&ps);draw_about(dc);EndPaint(h,&ps);return 0;}
    if(m==WM_SETCURSOR){POINT p;if(GetCursorPos(&p)){ScreenToClient(h,&p);if(pt_in(p,ABOUT_W-82,22,ABOUT_W-22,76)){SetCursor(gHand);return TRUE;}}SetCursor(gArrow);return TRUE;}
    if(m==WM_LBUTTONDOWN){POINT p={(LONG)(short)(l&0xFFFF),(LONG)(short)((l>>16)&0xFFFF)};if(!pt_in(p,ABOUT_W-82,22,ABOUT_W-22,76)&&p.y<82){ReleaseCapture();SendMessageW(h,WM_NCLBUTTONDOWN,HTCAPTION,0);return 0;}}
    if(m==WM_LBUTTONUP){POINT p={(LONG)(short)(l&0xFFFF),(LONG)(short)((l>>16)&0xFFFF)};if(pt_in(p,ABOUT_W-82,22,ABOUT_W-22,76)){DestroyWindow(h);return 0;}}
    if(m==WM_KEYDOWN && w==VK_ESCAPE){DestroyWindow(h);return 0;}
    if(m==WM_CLOSE){DestroyWindow(h);return 0;}
    if(m==WM_DESTROY){gAboutWnd=0;EnableWindow(gWnd,TRUE);SetForegroundWindow(gWnd);return 0;}
    return DefWindowProcW(h,m,w,l);
}

static void show_about(void){
    RECT mr;int x,y;
    if(gAboutWnd){SetForegroundWindow(gAboutWnd);return;}
    GetWindowRect(gWnd,&mr);x=mr.left+(MAIN_W-ABOUT_W)/2;y=mr.top+(MAIN_H-ABOUT_H)/2;
    EnableWindow(gWnd,FALSE);
    gAboutWnd=CreateWindowExW(0,L"DE2FRAboutWindow",L"À propos",WS_POPUP,x,y,ABOUT_W,ABOUT_H,gWnd,NULL,gInst,NULL);
    if(!gAboutWnd){EnableWindow(gWnd,TRUE);return;}
    ShowWindow(gAboutWnd,SW_SHOW);UpdateWindow(gAboutWnd);SetForegroundWindow(gAboutWnd);
}

static void request_close(void){
    if(gBusy){MessageBoxW(gWnd,L"Une opération est en cours. Attendez sa fin avant de fermer l'installateur.",L"Opération en cours",MB_ICONINFORMATION);return;}
    DestroyWindow(gWnd);
}

static LRESULT CALLBACK wndproc(HWND h,UINT m,WPARAM w,LPARAM l){
    if(m==WM_ERASEBKGND)return 1;
    if(m==WM_PAINT){PAINTSTRUCT ps;HDC dc=BeginPaint(h,&ps);draw_skin(dc);draw_path_area(dc);EndPaint(h,&ps);return 0;}
    if(m==WM_SETCURSOR){POINT p;if(GetCursorPos(&p)){ScreenToClient(h,&p);if(main_hit(p)!=HIT_NONE){SetCursor(gHand);return TRUE;}}SetCursor(gArrow);return TRUE;}
    if(m==WM_LBUTTONDOWN){POINT p={(LONG)(short)(l&0xFFFF),(LONG)(short)((l>>16)&0xFFFF)};if(main_hit(p)==HIT_NONE && p.y<470){ReleaseCapture();SendMessageW(h,WM_NCLBUTTONDOWN,HTCAPTION,0);return 0;}}
    if(m==WM_LBUTTONUP){
        POINT p={(LONG)(short)(l&0xFFFF),(LONG)(short)((l>>16)&0xFFFF)};int hit=main_hit(p);
        if(hit==HIT_CLOSE){request_close();return 0;}
        if(hit==HIT_ABOUT){show_about();return 0;}
        if(hit==HIT_BROWSE){browse_game();return 0;}
        if(hit==HIT_INSTALL){launch_action(1);return 0;}
        if(hit==HIT_UNINSTALL){launch_action(2);return 0;}
    }
    if(m==WM_APP_PROGRESS){gProgressValue=(int)w;if(gProgressValue<0)gProgressValue=0;if(gProgressValue>100)gProgressValue=100;invalidate_path();return 0;}
    if(m==WM_APP_DONE){
        DWORD ec=(DWORD)w;int mode=(int)l;gProgressValue=(ec==0?100:0);gBusy=FALSE;InvalidateRect(gWnd,NULL,FALSE);
        if(ec==0){
            MessageBoxW(gWnd,mode==1?L"La traduction française V1.0.0 a été installée avec succès.\n\nVous pouvez lancer Dead Effect 2 VR et conserver « Français » dans les options de langue.":L"La traduction a été désinstallée et le resources.assets original a été restauré avec succès.",L"Dead Effect 2 VR — Traduction française",MB_ICONINFORMATION);
        } else {
            int r=MessageBoxW(gWnd,L"L'opération n'a pas pu être terminée.\n\nAucune manipulation technique n'est nécessaire. Voulez-vous ouvrir le dossier des logs pour pouvoir transmettre le rapport ?",L"Erreur d'installation",MB_YESNO|MB_ICONERROR);
            if(r==IDYES)open_logs();
        }
        gProgressValue=0;InvalidateRect(gWnd,NULL,FALSE);return 0;
    }
    if(m==WM_KEYDOWN && w==VK_ESCAPE){request_close();return 0;}
    if(m==WM_CLOSE){request_close();return 0;}
    if(m==WM_DESTROY){PostQuitMessage(0);return 0;}
    return DefWindowProcW(h,m,w,l);
}

typedef struct { HWND hwnd; UINT message; WPARAM wParam; LPARAM lParam; DWORD time; POINT pt; } MSG;

void WINAPI WinMainCRTStartup(void){
    WNDCLASSEXW wc,ac;MSG msg;int x,y;
    SetProcessDPIAware();
    gInst=(HINSTANCE)GetModuleHandleW(NULL);CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);ensure_report_dirs();
    gArrow=LoadCursorW(NULL,IDC_ARROW);gHand=LoadCursorW(NULL,IDC_HAND);
    gPathFont=CreateFontW(17,0,0,0,FW_SEMIBOLD,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");
    gAboutTitleFont=CreateFontW(30,0,0,0,FW_BOLD,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");
    gAboutHeadFont=CreateFontW(19,0,0,0,FW_SEMIBOLD,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");
    gAboutBodyFont=CreateFontW(18,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");
    gAboutCloseFont=CreateFontW(29,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");

    memzero(&wc,sizeof(wc));wc.cbSize=sizeof(wc);wc.lpfnWndProc=wndproc;wc.hInstance=gInst;wc.hCursor=gArrow;wc.hbrBackground=NULL;wc.lpszClassName=L"DE2FRInstallerSkinWindow";RegisterClassExW(&wc);
    memzero(&ac,sizeof(ac));ac.cbSize=sizeof(ac);ac.lpfnWndProc=aboutproc;ac.hInstance=gInst;ac.hCursor=gArrow;ac.hbrBackground=NULL;ac.lpszClassName=L"DE2FRAboutWindow";RegisterClassExW(&ac);

    x=(GetSystemMetrics(0)-MAIN_W)/2;y=(GetSystemMetrics(1)-MAIN_H)/2;if(x<0)x=0;if(y<0)y=0;
    gWnd=CreateWindowExW(0,L"DE2FRInstallerSkinWindow",L"Dead Effect 2 VR — Traduction française V1.0.0",WS_POPUP,x,y,MAIN_W,MAIN_H,NULL,NULL,gInst,NULL);
    if(!gWnd){ExitProcess(2);}
    if(detect_game(gSelected)){}else gSelected[0]=0;
    ShowWindow(gWnd,SW_SHOW);UpdateWindow(gWnd);SetForegroundWindow(gWnd);
    while(GetMessageW(&msg,NULL,0,0)>0){TranslateMessage(&msg);DispatchMessageW(&msg);}
    if(gPathFont)DeleteObject(gPathFont);if(gAboutTitleFont)DeleteObject(gAboutTitleFont);if(gAboutHeadFont)DeleteObject(gAboutHeadFont);if(gAboutBodyFont)DeleteObject(gAboutBodyFont);if(gAboutCloseFont)DeleteObject(gAboutCloseFont);
    CoUninitialize();ExitProcess(0);
}
