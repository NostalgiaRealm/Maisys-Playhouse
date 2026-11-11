
/* ==== FUN_1001aa81 @ 1001aa81 ==== 
 * signature: undefined FUN_1001aa81(void)
 * body: 1001aa81-1001ab3a
 */

int FUN_1001aa81(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  FUN_10016e20(2);
  if (0 < DAT_10025200) {
    do {
      iVar2 = *(int *)(DAT_100241f8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10016f00(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100241f8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_2 == 1) {
            iVar2 = FUN_1001a9c0(piVar1);
            if (iVar2 != -1) {
              iVar5 = iVar5 + 1;
            }
          }
          else if (((param_2 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_1001a9c0(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_10016f70(iVar4,*(int *)(DAT_100241f8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  if (param_2 != 1) {
    iVar5 = iVar3;
  }
  return iVar5;
}


