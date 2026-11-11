
/* ==== entry @ 140193c0 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 140193c0-14019489
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_14026e3c = DAT_14026e3c + 1;
  }
  else if (param_2 == 0) {
    if (DAT_14026e3c < 1) {
      return 0;
    }
    DAT_14026e3c = DAT_14026e3c + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_14029f8c != (code *)0x0) {
      iVar2 = (*DAT_14029f8c)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_14019270(param_1,param_2);
      goto LAB_14019435;
    }
LAB_14019443:
    if (iVar1 != 0) goto LAB_14019456;
  }
  else {
LAB_14019435:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_14008e90(param_1,param_2);
      goto LAB_14019443;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_1401afc0();
  }
LAB_14019456:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_14019270(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_14029f8c != (code *)0x0)) {
      iVar1 = (*DAT_14029f8c)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


