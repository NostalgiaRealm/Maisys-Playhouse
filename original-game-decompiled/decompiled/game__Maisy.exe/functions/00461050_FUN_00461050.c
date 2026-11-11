
/* ==== FUN_00461050 @ 00461050 ==== 
 * signature: undefined __fastcall FUN_00461050(int * param_1)
 * body: 00461050-00461102
 */

void __fastcall FUN_00461050(int *param_1)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x38c))(&local_c,1);
  if ((local_c < local_8) && (local_a < local_6)) {
    (**(code **)(iVar1 + 0x398))(&local_14,1);
    (**(code **)(iVar1 + 0x3a0))(&local_1c,1);
    sVar5 = -local_a;
    sVar3 = -local_c;
    local_14 = local_14 + sVar3;
    local_10 = local_10 + sVar3;
    local_12 = local_12 + sVar5;
    local_e = local_e + sVar5;
    local_1c = local_1c + sVar3;
    local_18 = local_18 + sVar3;
    local_1a = local_1a + sVar5;
    local_16 = local_16 + sVar5;
    piVar2 = *(int **)((int)param_1 + 0x5a);
    local_c = 0;
    uVar11 = 0;
    local_8 = local_8 + sVar3;
    uVar10 = 0;
    local_a = 0;
    uVar9 = 0;
    local_6 = local_6 + sVar5;
    psVar8 = &local_c;
    psVar6 = &local_14;
    psVar7 = psVar6;
    uVar4 = FUN_004084c0(*(int *)((int)param_1 + 0x3a));
    (**(code **)(*piVar2 + 0x300))(uVar4,psVar6,psVar7,psVar8,uVar9,uVar10,uVar11);
  }
  return;
}


