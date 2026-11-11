
/* ==== FUN_1100ba10 @ 1100ba10 ==== 
 * signature: undefined __cdecl FUN_1100ba10(undefined4 param_1, int param_2, int param_3)
 * body: 1100ba10-1100bb65
 */

void __cdecl FUN_1100ba10(undefined4 param_1,int param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short local_18;
  short sStack_16;
  short local_14;
  short sStack_12;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar7 = (int)*(short *)(param_2 + 0x3e);
  iVar8 = (int)*(short *)(param_2 + 0x24);
  if (*(short *)(param_2 + 0x1c) == 1) {
    iVar7 = iVar8 - iVar7;
  }
  if ((*(int *)(param_3 + 0x2e) != 0) && (*(int *)(param_3 + 0x2a) != 0)) {
    psVar1 = *(short **)(param_3 + 0x14);
    local_10 = (int)psVar1[2];
    local_8 = (int)psVar1[1];
    local_4 = (int)psVar1[3];
    sVar3 = (short)(local_10 + *psVar1 >> 1);
    local_c = (int)sVar3;
    sVar2 = (short)(((*psVar1 - local_c) * iVar7) / iVar8) + sVar3;
    sVar3 = (short)(((local_10 - local_c) * iVar7) / iVar8) + sVar3;
    sVar5 = (short)(local_8 + local_4 >> 1);
    sVar4 = (short)(((local_8 - sVar5) * iVar7) / iVar8) + sVar5;
    sVar5 = (short)(((local_4 - sVar5) * iVar7) / iVar8) + sVar5;
    local_18 = sVar2;
    sStack_16 = sVar4;
    local_14 = sVar3;
    sStack_12 = sVar5;
    uVar6 = FUN_11028de0(&local_18);
    if ((char)uVar6 == '\0') {
      FUN_1100bb70(&local_18,*(short **)(param_3 + 0x14),*(short **)(param_3 + 0x1c));
    }
    FUN_1101ea40(*(int *)(param_3 + 0x2e),*(int *)(param_3 + 0x36),local_18,sStack_16,
                 local_14 - local_18,sStack_12 - sStack_16,*(int *)(param_3 + 0x2a),
                 *(int *)(param_3 + 0x32),sVar2,sVar4,sVar3 - sVar2,sVar5 - sVar4,
                 *(byte **)(param_3 + 0x3a));
  }
  return;
}


