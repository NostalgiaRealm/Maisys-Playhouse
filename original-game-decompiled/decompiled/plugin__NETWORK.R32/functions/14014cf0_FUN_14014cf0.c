
/* ==== FUN_14014cf0 @ 14014cf0 ==== 
 * signature: int __cdecl FUN_14014cf0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 14014cf0-14014ec1
 */

int __cdecl FUN_14014cf0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int local_d4;
  int iStack_d0;
  undefined2 local_cc;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined2 uStack_c0;
  undefined4 uStack_be;
  undefined4 uStack_ba;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined2 local_80 [7];
  int iStack_72;
  undefined1 auStack_54 [84];
  
  if (param_2 == 0) {
    return 0x10000;
  }
  local_cc = 0x17;
  local_ac = 0x69;
  local_ca = param_3;
  local_c6 = 0;
  local_a6 = 0;
  local_a2 = 0;
  local_aa = 0;
  local_9e = 0;
  if (param_4 == 0) {
    local_80[0] = 0;
  }
  else {
    FUN_14008ed0(0,local_80,param_4);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_d4);
  iVar2 = (*pcVar1)(local_d4,param_2,s_parent_14026368,0,&local_ac);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_ba = 0;
    uStack_be = local_aa;
    uStack_b6 = 0;
    uStack_b2 = 0;
    uStack_c0 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_d4);
    puVar8 = auStack_54;
    puVar6 = local_80;
    uVar7 = 0x40000000;
    puVar5 = &local_cc;
    puVar4 = &uStack_c0;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(local_d4,uVar3,puVar4,puVar5,puVar6,uVar7,puVar8);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_d0);
    puVar8 = auStack_54;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(iStack_d0,uVar3,puVar8);
    if ((param_4 != 0) && (iStack_72 != 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_d4);
      DAT_14028e48 = (*pcVar1)(local_d4,iStack_72);
    }
    iVar2 = 0;
  }
  return iVar2;
}


