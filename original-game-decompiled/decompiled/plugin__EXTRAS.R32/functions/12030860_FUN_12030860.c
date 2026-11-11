
/* ==== FUN_12030860 @ 12030860 ==== 
 * signature: int __stdcall FUN_12030860(void)
 * body: 12030860-120308f7
 */

int FUN_12030860(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_1203aae0) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_12039adc + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_12039adc + iVar4) + 0x20));
          FUN_1202c7c0(*(LPVOID *)(DAT_12039adc + iVar4));
          *(undefined4 *)(DAT_12039adc + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1203aae0);
  }
  FUN_1202c520(2);
  return iVar2;
}


