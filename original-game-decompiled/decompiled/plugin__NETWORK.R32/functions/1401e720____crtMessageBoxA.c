
/* ==== ___crtMessageBoxA @ 1401e720 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 1401e720-1401e7b1
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
  if (DAT_14028190 != (FARPROC)0x0) {
LAB_1401e76f:
    if (DAT_14028194 != (FARPROC)0x0) {
      iVar1 = (*DAT_14028194)();
    }
    if ((iVar1 != 0) && (DAT_14028198 != (FARPROC)0x0)) {
      iVar1 = (*DAT_14028198)(iVar1);
    }
    iVar1 = (*DAT_14028190)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_14028190 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_14028190 != (FARPROC)0x0) {
      DAT_14028194 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_14028198 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1401e76f;
    }
  }
  return 0;
}


