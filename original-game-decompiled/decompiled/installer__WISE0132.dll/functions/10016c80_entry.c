
/* ==== entry @ 10016c80 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 10016c80-10016d2c
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10023318 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_10016cde:
    iVar1 = FUN_10001000(param_1);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_10016b60(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_10016b60(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_10025340 != (code *)0x0)) {
        iVar1 = (*DAT_10025340)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_10025340 != (code *)0x0) {
    iVar1 = (*DAT_10025340)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_10016b60(param_1,param_2);
    if (iVar1 != 0) goto LAB_10016cde;
  }
  return 0;
}


