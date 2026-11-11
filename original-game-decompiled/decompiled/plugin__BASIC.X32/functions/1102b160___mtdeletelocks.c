
/* ==== __mtdeletelocks @ 1102b160 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 1102b160-1102b1c3
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
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_110368e0)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_11029180((LPVOID)(&DAT_110368e0)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036904);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036914);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036924);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_110368e4);
  return;
}


