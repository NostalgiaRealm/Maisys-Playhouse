
/* ==== ___crtMessageBoxA @ 0049f7c0 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 0049f7c0-0049f851
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
  if (DAT_004dfc20 != (FARPROC)0x0) {
LAB_0049f80f:
    if (DAT_004dfc24 != (FARPROC)0x0) {
      iVar1 = (*DAT_004dfc24)();
    }
    if ((iVar1 != 0) && (DAT_004dfc28 != (FARPROC)0x0)) {
      iVar1 = (*DAT_004dfc28)(iVar1);
    }
    iVar1 = (*DAT_004dfc20)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004dfc20 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_004dfc20 != (FARPROC)0x0) {
      DAT_004dfc24 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_004dfc28 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_0049f80f;
    }
  }
  return 0;
}


