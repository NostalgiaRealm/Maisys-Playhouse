
/* ==== ___crtMessageBoxA @ 1202c880 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 1202c880-1202c911
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
  if (DAT_1203856c != (FARPROC)0x0) {
LAB_1202c8cf:
    if (DAT_12038570 != (FARPROC)0x0) {
      iVar1 = (*DAT_12038570)();
    }
    if ((iVar1 != 0) && (DAT_12038574 != (FARPROC)0x0)) {
      iVar1 = (*DAT_12038574)(iVar1);
    }
    iVar1 = (*DAT_1203856c)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_1203856c = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_1203856c != (FARPROC)0x0) {
      DAT_12038570 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_12038574 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1202c8cf;
    }
  }
  return 0;
}


