
/* ==== __mtdeletelocks @ 1202c440 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 1202c440-1202c4a3
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
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_12038408)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_1202c7c0((LPVOID)(&DAT_12038408)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203842c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203843c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203844c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203840c);
  return;
}


