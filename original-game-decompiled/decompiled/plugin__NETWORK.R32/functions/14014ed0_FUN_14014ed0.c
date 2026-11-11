
/* ==== FUN_14014ed0 @ 14014ed0 ==== 
 * signature: int __cdecl FUN_14014ed0(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * body: 14014ed0-14015029
 */

int __cdecl FUN_14014ed0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int local_a8;
  int iStack_a4;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined2 uStack_94;
  undefined4 uStack_92;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  undefined4 uStack_86;
  undefined2 local_80;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined1 auStack_54 [84];
  
  if (param_2 == 0) {
    return 0x10000;
  }
  local_9e = param_3;
  local_9a = 0;
  local_7a = 0;
  local_76 = 0;
  local_7e = 0;
  local_72 = 0;
  local_a0 = 0x17;
  local_80 = 0x69;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_a8);
  iVar2 = (*pcVar1)(local_a8,param_2,s_parent_14026368,0,&local_80);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_8e = 0;
    uStack_8a = 0;
    uStack_92 = local_7e;
    uStack_86 = 0;
    uStack_94 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_a8);
    puVar7 = auStack_54;
    uVar6 = 0x40000000;
    puVar5 = &local_a0;
    puVar4 = &uStack_94;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(local_a8,uVar3,puVar4,puVar5,param_4,uVar6,puVar7);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_a4);
    puVar7 = auStack_54;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(iStack_a4,uVar3,puVar7);
    iVar2 = 0;
  }
  return iVar2;
}


