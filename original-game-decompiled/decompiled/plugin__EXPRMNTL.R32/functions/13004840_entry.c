
/* ==== entry @ 13004840 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 13004840-13004909
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_13008324 = DAT_13008324 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_13008324 < 1) {
      return 0;
    }
    DAT_13008324 = DAT_13008324 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_13009e68 != (code *)0x0) {
      iVar2 = (*DAT_13009e68)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_130046f0(param_1,param_2);
      goto LAB_130048b5;
    }
LAB_130048c3:
    if (iVar1 != 0) goto LAB_130048d6;
  }
  else {
LAB_130048b5:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_13005710();
      goto LAB_130048c3;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_13004ca0();
  }
LAB_130048d6:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_130046f0(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_13009e68 != (code *)0x0)) {
      iVar1 = (*DAT_13009e68)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


