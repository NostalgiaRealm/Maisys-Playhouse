
/* ==== FUN_1400a660 @ 1400a660 ==== 
 * signature: undefined4 __cdecl FUN_1400a660(int param_1, int param_2)
 * body: 1400a660-1400a88f
 */

undefined4 __cdecl FUN_1400a660(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_7c;
  undefined2 local_78;
  int local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  int iStack_64;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  int local_54 [21];
  
  iVar5 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar5) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[0x12],1,1,local_54);
    DAT_14028e48 = (*pcVar1)(local_54[0],param_1,*(undefined4 *)(param_1 + 0x18),0);
    return 0;
  }
  if ((*(int *)(param_2 + 8) != *(int *)(param_1 + 0x54)) &&
     ((((*(int *)(param_1 + 0x38) == iVar5 && (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x10))
        ) || ((*(int *)(param_1 + 0x42) == iVar5 &&
              (*(int *)(param_1 + 0x46) == *(int *)(param_2 + 0x10))))) ||
      ((*(int *)(param_1 + 0x4c) == iVar5 && (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x10)))
      )))) {
    local_72 = 0;
    local_6e = 0;
    local_76 = 0;
    local_6a = 0;
    local_78 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,5,&local_7c);
    DAT_14028e48 = (*pcVar1)(local_7c,*(undefined4 *)(param_1 + 0x54),s_parent_14026368,0,&local_78)
    ;
    if ((DAT_14028e48 == 0) && (local_76 != 0)) {
      uStack_5e = *(undefined4 *)(param_2 + 0xc);
      uStack_5a = *(undefined4 *)(param_2 + 0x10);
      uStack_60 = 0x17;
      pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x16,&local_7c);
      piVar7 = local_54;
      uVar6 = 0;
      iVar5 = param_1 + 10;
      puVar4 = &uStack_60;
      puVar3 = &local_78;
      uVar2 = FUN_14008a80(param_1);
      DAT_14028e48 = (*pcVar1)(local_7c,uVar2,puVar3,puVar4,iVar5,uVar6,piVar7);
      pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x17,&iStack_64);
      piVar7 = local_54;
      uVar2 = FUN_14008a80(param_1);
      DAT_14028e48 = (*pcVar1)(iStack_64,uVar2,piVar7);
      FUN_14008d80((int)&local_78);
      return 0x10000;
    }
    pcVar1 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_7c);
    DAT_14028e48 = (*pcVar1)(local_7c,param_1,1,s_Cannot_get_parent_14026598);
    return 0;
  }
  return 0x10000;
}


