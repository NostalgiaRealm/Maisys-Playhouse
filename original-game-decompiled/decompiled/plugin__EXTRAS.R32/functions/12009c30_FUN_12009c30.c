
/* ==== FUN_12009c30 @ 12009c30 ==== 
 * signature: undefined __cdecl FUN_12009c30(int param_1, int param_2)
 * body: 12009c30-12009d24
 */

void __cdecl FUN_12009c30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = param_2 - param_1;
  uVar3 = DAT_12039850;
joined_r0x12009c42:
  iVar2 = param_1;
  iVar4 = param_2;
  if (iVar1 < 2) {
    return;
  }
LAB_12009c52:
  DAT_12039854 = iVar2 + 1;
  if (DAT_12039854 < param_2) goto code_r0x12009c57;
  goto LAB_12009c80;
code_r0x12009c57:
  fVar5 = (float10)(*DAT_12039858)(DAT_12039854,param_1,uVar3);
  iVar2 = DAT_12039854;
  uVar3 = DAT_12039850;
  if (fVar5 < (float10)0.0) goto LAB_12009c52;
LAB_12009c80:
  do {
    iVar1 = iVar4;
    iVar4 = iVar1 + -1;
    if (iVar4 <= param_1) break;
    fVar5 = (float10)(*DAT_12039858)(iVar4,param_1,uVar3);
    uVar3 = DAT_12039850;
  } while ((float10)0.0 < fVar5);
  if (DAT_12039854 < iVar4) {
    (*DAT_1203985c)(DAT_12039854,iVar4,uVar3);
    iVar2 = DAT_12039854;
    uVar3 = DAT_12039850;
    goto LAB_12009c52;
  }
  if (param_1 == iVar4) {
    param_1 = param_1 + 1;
    iVar4 = param_2;
  }
  else {
    (*DAT_1203985c)(param_1,iVar4,uVar3);
    if (iVar4 - param_1 < (param_2 - iVar4) + -1) {
      FUN_12009c30(param_1,iVar4);
      uVar3 = DAT_12039850;
      param_1 = iVar1;
      iVar4 = param_2;
    }
    else {
      FUN_12009c30(iVar1,param_2);
      uVar3 = DAT_12039850;
    }
  }
  iVar1 = iVar4 - param_1;
  param_2 = iVar4;
  goto joined_r0x12009c42;
}


