
/* ==== entry @ 10009b80 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 10009b80-10009c2c
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_10016f30 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_10009bde:
    iVar1 = FUN_1000b470();
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_10009a10(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_10009a10(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_10018518 != (code *)0x0)) {
        iVar1 = (*DAT_10018518)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_10018518 != (code *)0x0) {
    iVar1 = (*DAT_10018518)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_10009a10(param_1,param_2);
    if (iVar1 != 0) goto LAB_10009bde;
  }
  return 0;
}


