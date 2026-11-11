
/* ==== ___crtMessageBoxA @ 15002580 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 15002580-15002611
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
  if (DAT_150054d4 != (FARPROC)0x0) {
LAB_150025cf:
    if (DAT_150054d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_150054d8)();
    }
    if ((iVar1 != 0) && (DAT_150054dc != (FARPROC)0x0)) {
      iVar1 = (*DAT_150054dc)(iVar1);
    }
    iVar1 = (*DAT_150054d4)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_150054d4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_150054d4 != (FARPROC)0x0) {
      DAT_150054d8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_150054dc = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_150025cf;
    }
  }
  return 0;
}


