
/* ==== entry @ 12028da0 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 12028da0-12028e69
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_12037e50 = DAT_12037e50 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_12037e50 < 1) {
      return 0;
    }
    DAT_12037e50 = DAT_12037e50 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_1203ac04 != (code *)0x0) {
      iVar2 = (*DAT_1203ac04)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_12028c50(param_1,param_2);
      goto LAB_12028e15;
    }
LAB_12028e23:
    if (iVar1 != 0) goto LAB_12028e36;
  }
  else {
LAB_12028e15:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_12027750(param_1,param_2);
      goto LAB_12028e23;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_1202a400();
  }
LAB_12028e36:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_12028c50(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_1203ac04 != (code *)0x0)) {
      iVar1 = (*DAT_1203ac04)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


