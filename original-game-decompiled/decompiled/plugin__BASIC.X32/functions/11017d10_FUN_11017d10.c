
/* ==== FUN_11017d10 @ 11017d10 ==== 
 * signature: undefined __cdecl FUN_11017d10(undefined4 * param_1, undefined4 param_2, short * param_3, undefined4 param_4, uint param_5, int param_6, int param_7, short * param_8, char param_9, char param_10)
 * body: 11017d10-11017ef7
 */

void __cdecl
FUN_11017d10(undefined4 *param_1,undefined4 param_2,short *param_3,undefined4 param_4,uint param_5,
            int param_6,int param_7,short *param_8,char param_9,char param_10)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  uint local_58;
  undefined4 local_54 [5];
  short local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined4 local_34;
  short local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  
  uVar4 = FUN_1100fc40((int)param_1);
  local_58 = 0;
  if (param_9 == '\0') {
    local_58 = param_5;
  }
  else {
    cVar3 = FUN_110062b0(&param_5,'\0');
    if (cVar3 != '\0') {
      FUN_11006270(&local_58,'\0');
    }
    cVar3 = FUN_110062b0(&param_5,'\x01');
    if (cVar3 != '\0') {
      FUN_11006270(&local_58,'\x01');
    }
    cVar3 = FUN_110062b0(&param_5,'\x02');
    if (cVar3 != '\0') {
      FUN_11006270(&local_58,'\x02');
    }
  }
  FUN_11011900(local_54,param_2,param_4,uVar4,local_58);
  iVar2 = param_7;
  iVar1 = param_6;
  iVar5 = *(int *)(param_6 + 2);
  if ((iVar5 == 0) || (*param_3 != 1)) {
    if ((*param_3 == 5) && (*(int *)(param_3 + 1) == 0xcf)) {
      local_40 = 7;
      uStack_3e = (undefined2)*(undefined4 *)(param_7 + 8);
      uStack_3c = (undefined2)((uint)*(undefined4 *)(param_7 + 8) >> 0x10);
      FUN_1100fb40(param_1,&uStack_3e);
    }
    else {
      local_38 = *(undefined4 *)(param_3 + 4);
      local_40 = (short)*(undefined4 *)param_3;
      uStack_3e = (undefined2)((uint)*(undefined4 *)param_3 >> 0x10);
      local_34 = *(undefined4 *)(param_3 + 6);
      uStack_3c = (undefined2)*(undefined4 *)(param_3 + 2);
      uStack_3a = (undefined2)((uint)*(undefined4 *)(param_3 + 2) >> 0x10);
    }
  }
  else {
    local_40 = 7;
    uStack_3e = (undefined2)iVar5;
    uStack_3c = (undefined2)((uint)iVar5 >> 0x10);
  }
  psVar6 = param_8;
  if (*param_8 == 0x1b) {
    psVar6 = (short *)(iVar2 + 0x24);
  }
  psVar7 = &local_30;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
    psVar6 = psVar6 + 2;
    psVar7 = psVar7 + 2;
  }
  *psVar7 = *psVar6;
  FUN_11017cc0(param_1,local_54);
  if (*param_8 == 0x1c) {
    *(undefined4 *)(param_8 + 1) = local_2e;
    *(undefined4 *)(param_8 + 3) = local_2a;
  }
  if (param_10 != '\0') {
    if (*(int *)(iVar1 + 2) != 0) {
      FUN_110048a0(param_1,0xe,0,iVar1);
    }
    if ((*param_3 == 1) && (local_40 == 7)) {
      *(uint *)(iVar1 + 2) = CONCAT22(uStack_3c,uStack_3e);
    }
    if (*(int *)(iVar1 + 2) != 0) {
      FUN_110048a0(param_1,0xe,1,iVar1);
    }
  }
  return;
}


