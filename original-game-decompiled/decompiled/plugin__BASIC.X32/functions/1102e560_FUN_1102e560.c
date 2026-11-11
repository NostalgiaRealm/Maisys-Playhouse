
/* ==== FUN_1102e560 @ 1102e560 ==== 
 * signature: int __stdcall FUN_1102e560(void)
 * body: 1102e560-1102e5f7
 */

int FUN_1102e560(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_1103aa20) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_11039a1c + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_11039a1c + iVar4) + 0x20));
          FUN_11029180(*(LPVOID *)(DAT_11039a1c + iVar4));
          *(undefined4 *)(DAT_11039a1c + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1103aa20);
  }
  FUN_1102b240(2);
  return iVar2;
}


