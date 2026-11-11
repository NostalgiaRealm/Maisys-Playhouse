
/* ==== entry @ 15001160 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 15001160-15001229
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_15005030 = DAT_15005030 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_15005030 < 1) {
      return 0;
    }
    DAT_15005030 = DAT_15005030 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_15006b68 != (code *)0x0) {
      iVar2 = (*DAT_15006b68)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_15001010(param_1,param_2);
      goto LAB_150011d5;
    }
LAB_150011e3:
    if (iVar1 != 0) goto LAB_150011f6;
  }
  else {
LAB_150011d5:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_15002030();
      goto LAB_150011e3;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_150015c0();
  }
LAB_150011f6:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_15001010(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_15006b68 != (code *)0x0)) {
      iVar1 = (*DAT_15006b68)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


