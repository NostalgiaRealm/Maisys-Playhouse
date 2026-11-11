
/* ==== __mtdeletelocks @ 1401a570 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 1401a570-1401a5d3
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
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_140271f8)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_1401dd10((LPVOID)(&DAT_140271f8)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402721c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402722c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402723c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_140271fc);
  return;
}


