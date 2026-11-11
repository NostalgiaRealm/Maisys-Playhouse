
/* ==== __mtdeletelocks @ 13005980 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 13005980-130059e3
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
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_13008660)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_13005bc0((LPVOID)(&DAT_13008660)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008684);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008694);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_130086a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008664);
  return;
}


