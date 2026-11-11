
/* ==== __ioterm @ 0049b820 ==== 
 * signature: void __cdecl __ioterm(void)
 * body: 0049b820-0049b874
 * note: Library Function - Single Match  __ioterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_004e6690;
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
      FUN_0048e750((LPVOID)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004e6790);
  return;
}


