
/* ==== ___crtMessageBoxA @ 1102c150 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 1102c150-1102c1e1
 * note: Library Function - Single Match  ___crtMessageBoxA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 1998 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_11036c94 != (FARPROC)0x0) {
LAB_1102c19f:
    if (DAT_11036c98 != (FARPROC)0x0) {
      iVar1 = (*DAT_11036c98)();
    }
    if ((iVar1 != 0) && (DAT_11036c9c != (FARPROC)0x0)) {
      iVar1 = (*DAT_11036c9c)(iVar1);
    }
    iVar1 = (*DAT_11036c94)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_11036c94 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_11036c94 != (FARPROC)0x0) {
      DAT_11036c98 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_11036c9c = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1102c19f;
    }
  }
  return 0;
}


