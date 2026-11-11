
/* ==== FUN_14020d50 @ 14020d50 ==== 
 * signature: int __stdcall FUN_14020d50(void)
 * body: 14020d50-14020de7
 */

int FUN_14020d50(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_14029e60) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_14028e54 + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_14028e54 + iVar4) + 0x20));
          FUN_1401dd10(*(LPVOID *)(DAT_14028e54 + iVar4));
          *(undefined4 *)(DAT_14028e54 + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_14029e60);
  }
  FUN_1401a650(2);
  return iVar2;
}


