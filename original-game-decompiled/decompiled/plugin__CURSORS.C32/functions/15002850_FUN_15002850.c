
/* ==== FUN_15002850 @ 15002850 ==== 
 * signature: int __stdcall FUN_15002850(void)
 * body: 15002850-150028e7
 */

int FUN_15002850(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_15006a40) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_15005a3c + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_15005a3c + iVar4) + 0x20));
          FUN_150024e0(*(LPVOID *)(DAT_15005a3c + iVar4));
          *(undefined4 *)(DAT_15005a3c + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_15006a40);
  }
  FUN_15002380(2);
  return iVar2;
}


