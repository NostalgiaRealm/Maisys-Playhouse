
/* ==== ___crtMessageBoxA @ 13005c60 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 13005c60-13005cf1
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
  if (DAT_130087c4 != (FARPROC)0x0) {
LAB_13005caf:
    if (DAT_130087c8 != (FARPROC)0x0) {
      iVar1 = (*DAT_130087c8)();
    }
    if ((iVar1 != 0) && (DAT_130087cc != (FARPROC)0x0)) {
      iVar1 = (*DAT_130087cc)(iVar1);
    }
    iVar1 = (*DAT_130087c4)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_130087c4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_130087c4 != (FARPROC)0x0) {
      DAT_130087c8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_130087cc = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_13005caf;
    }
  }
  return 0;
}


