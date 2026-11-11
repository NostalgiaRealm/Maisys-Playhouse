
/* ==== __ioterm @ 1202a5f0 ==== 
 * signature: void __cdecl __ioterm(void)
 * body: 1202a5f0-1202a644
 * note: Library Function - Single Match  __ioterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_1203aaf0;
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x480) {
        do {
          if (*(int *)(uVar1 + 8) != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0xc));
          }
          uVar1 = uVar1 + 0x24;
        } while (uVar1 < *puVar2 + 0x480);
      }
      FUN_1202c7c0((LPVOID)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_1203abf0);
  return;
}


