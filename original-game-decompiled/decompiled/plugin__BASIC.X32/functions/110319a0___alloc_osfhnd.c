
/* ==== __alloc_osfhnd @ 110319a0 ==== 
 * signature: int __cdecl __alloc_osfhnd(void)
 * body: 110319a0-11031add
 * note: Library Function - Single Match  __alloc_osfhnd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 1998 Release */

int __cdecl __alloc_osfhnd(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int _Filehandle;
  int *piVar3;
  int iVar4;
  int local_4;
  
  _Filehandle = -1;
  iVar4 = 0;
  piVar3 = &DAT_1103aa30;
  __lock(0x12);
  local_4 = 0;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_11029420(0x480);
      if (puVar1 != (undefined4 *)0x0) {
        DAT_1103ab30 = DAT_1103ab30 + 0x20;
        (&DAT_1103aa30)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            puVar2 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar2;
          } while (puVar2 < (undefined4 *)((&DAT_1103aa30)[local_4] + 0x480));
        }
        _Filehandle = local_4 << 5;
        __lock_fhandle(_Filehandle);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            __lock(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            FUN_1102b240(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            _Filehandle = iVar4 + ((int)puVar1 - *piVar3) / 0x24;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (undefined4 *)(*piVar3 + 0x480));
    }
    if (_Filehandle != -1) break;
    iVar4 = iVar4 + 0x20;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
  } while (piVar3 < &DAT_1103ab30);
  FUN_1102b240(0x12);
  return _Filehandle;
}


