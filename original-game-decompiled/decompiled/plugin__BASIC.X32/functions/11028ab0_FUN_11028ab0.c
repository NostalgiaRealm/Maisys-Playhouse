
/* ==== FUN_11028ab0 @ 11028ab0 ==== 
 * signature: undefined1 __cdecl FUN_11028ab0(undefined4 * param_1, int param_2)
 * body: 11028ab0-11028b96
 */

undefined1 __cdecl FUN_11028ab0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_58;
  undefined1 local_54 [20];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_30;
  int local_2e;
  
  local_54[0] = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar5 = FUN_1100fc40((int)param_1);
  if (iVar2 == 0xdd) {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  if ((*(int *)(param_2 + 0x10) == iVar2) &&
     (((*(int *)(param_2 + 0x14) == 0 || (iVar3 == *(int *)(param_2 + 0x14))) &&
      (local_58 = *(int *)(iVar1 + 8), iVar5 != local_58)))) {
    uVar7 = 0;
    uVar6 = FUN_1100fc40((int)param_1);
    FUN_11011900((undefined4 *)local_54,0x4b0,0,uVar6,uVar7);
    local_40 = 8;
    local_3e = FUN_1100fc40((int)param_1);
    FUN_1100fb40(param_1,&local_58);
    bVar4 = FUN_11028ba0(param_1,local_58);
    if (bVar4) {
      local_30 = 3;
    }
    else {
      local_30 = 0x19;
    }
    local_2e = local_58;
    FUN_11017cc0(param_1,local_54);
    local_54[0] = 0;
  }
  return local_54[0];
}


