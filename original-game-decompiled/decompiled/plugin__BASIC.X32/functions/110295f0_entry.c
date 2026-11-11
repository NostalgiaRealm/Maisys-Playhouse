
/* ==== entry @ 110295f0 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 110295f0-110296b9
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_11036580 = DAT_11036580 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_11036580 < 1) {
      return 0;
    }
    DAT_11036580 = DAT_11036580 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_1103ab44 != (code *)0x0) {
      iVar2 = (*DAT_1103ab44)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_110294a0(param_1,param_2);
      goto LAB_11029665;
    }
LAB_11029673:
    if (iVar1 != 0) goto LAB_11029686;
  }
  else {
LAB_11029665:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_1102aec0();
      goto LAB_11029673;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_1102a000();
  }
LAB_11029686:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_110294a0(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_1103ab44 != (code *)0x0)) {
      iVar1 = (*DAT_1103ab44)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


