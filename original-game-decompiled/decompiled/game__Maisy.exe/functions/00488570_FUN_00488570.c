
/* ==== FUN_00488570 @ 00488570 ==== 
 * signature: undefined __cdecl FUN_00488570(int param_1, int param_2)
 * body: 00488570-00488654
 */

void __cdecl FUN_00488570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  uVar3 = DAT_004e34b8;
joined_r0x00488583:
  iVar2 = param_1;
  iVar4 = param_2;
  if (iVar1 < 2) {
    return;
  }
LAB_00488593:
  DAT_004e34bc = iVar2 + 1;
  if (DAT_004e34bc < param_2) goto code_r0x00488598;
  goto LAB_004885b8;
code_r0x00488598:
  iVar1 = (*DAT_004e34c0)(DAT_004e34bc,param_1,uVar3);
  iVar2 = DAT_004e34bc;
  uVar3 = DAT_004e34b8;
  if (iVar1 < 0) goto LAB_00488593;
LAB_004885b8:
  do {
    iVar1 = iVar4;
    iVar4 = iVar1 + -1;
    if (iVar4 <= param_1) break;
    iVar2 = (*DAT_004e34c0)(iVar4,param_1,uVar3);
    uVar3 = DAT_004e34b8;
  } while (0 < iVar2);
  if (DAT_004e34bc < iVar4) {
    (*DAT_004e34c4)(DAT_004e34bc,iVar4,uVar3);
    iVar2 = DAT_004e34bc;
    uVar3 = DAT_004e34b8;
    goto LAB_00488593;
  }
  if (iVar4 == param_1) {
    param_1 = param_1 + 1;
    iVar4 = param_2;
  }
  else {
    (*DAT_004e34c4)(param_1,iVar4,uVar3);
    if (iVar4 - param_1 < (param_2 - iVar4) + -1) {
      FUN_00488570(param_1,iVar4);
      uVar3 = DAT_004e34b8;
      param_1 = iVar1;
      iVar4 = param_2;
    }
    else {
      FUN_00488570(iVar1,param_2);
      uVar3 = DAT_004e34b8;
    }
  }
  iVar1 = iVar4 - param_1;
  param_2 = iVar4;
  goto joined_r0x00488583;
}


