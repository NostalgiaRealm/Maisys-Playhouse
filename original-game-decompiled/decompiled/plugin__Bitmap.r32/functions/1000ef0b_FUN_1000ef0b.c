
/* ==== FUN_1000ef0b @ 1000ef0b ==== 
 * signature: undefined FUN_1000ef0b(void)
 * body: 1000ef0b-1000ef0f
 */

int FUN_1000ef0b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_1000a320(2);
  if (0 < DAT_100183e0) {
    do {
      iVar2 = *(int *)(DAT_100173c0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000a400(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100173c0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000ee50(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1000ee50(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_1000a470(iVar4,*(int *)(DAT_100173c0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}


