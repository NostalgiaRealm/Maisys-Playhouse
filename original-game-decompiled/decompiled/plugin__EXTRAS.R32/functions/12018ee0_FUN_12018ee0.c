
/* ==== FUN_12018ee0 @ 12018ee0 ==== 
 * signature: int __cdecl FUN_12018ee0(undefined4 param_1, short * param_2, short * param_3)
 * body: 12018ee0-1201900d
 */

int __cdecl FUN_12018ee0(undefined4 param_1,short *param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  int local_2c;
  short local_28 [10];
  short local_14 [10];
  
  if ((*param_2 == -1) && (*param_3 == -1)) {
    if (*(int *)(param_3 + 1) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_2c);
      DAT_12039a9c = (*pcVar1)(local_2c,*(undefined4 *)(param_3 + 1));
    }
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_12018ae0((int)param_3,(int)param_2);
    return 0;
  }
  if (*param_2 == -1) {
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[7] = 0;
    local_28[8] = 0;
    local_28[0] = 0x69;
    iVar2 = FUN_12018b80(param_1,param_2,local_28);
    if (iVar2 != 0) {
      return iVar2;
    }
    param_2 = local_28;
  }
  psVar3 = param_3;
  if (*param_3 == -1) {
    psVar3 = local_14;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[5] = 0;
    local_14[6] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[7] = 0;
    local_14[8] = 0;
    local_14[0] = 0x69;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_2c);
  iVar2 = (*pcVar1)(local_2c,param_1,param_2,psVar3);
  DAT_12039a9c = iVar2;
  if ((iVar2 == 0) && (*param_3 == -1)) {
    iVar2 = FUN_12018cb0(param_1,local_14,param_3);
  }
  return iVar2;
}


