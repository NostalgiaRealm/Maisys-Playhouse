
/* ==== __mtdeletelocks @ 00493d40 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 00493d40-00493da3
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
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_004de448)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_0048e750((LPVOID)(&DAT_004de448)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de46c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de47c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de48c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de44c);
  return;
}


