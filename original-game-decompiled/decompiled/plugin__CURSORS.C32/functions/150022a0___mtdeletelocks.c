
/* ==== __mtdeletelocks @ 150022a0 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 150022a0-15002303
 * note: Library Function - Single Match  __mtdeletelocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_15005370)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_150024e0((LPVOID)(&DAT_15005370)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005394);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005374);
  return;
}


