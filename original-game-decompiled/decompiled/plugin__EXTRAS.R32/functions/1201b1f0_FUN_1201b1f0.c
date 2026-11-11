
/* ==== FUN_1201b1f0 @ 1201b1f0 ==== 
 * signature: undefined4 __cdecl FUN_1201b1f0(int param_1, int param_2)
 * body: 1201b1f0-1201b586
 */

undefined4 __cdecl FUN_1201b1f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_3c;
  int iStack_38;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  int iStack_8;
  int iStack_4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (((*(int *)(param_1 + 2) != iVar2) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) ||
     ((*(uint *)(param_1 + 0x16) & 4) != 0)) {
    if ((((*(int *)(param_1 + 0xc) == iVar2) &&
         (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) || (iVar2 == 0x7d2)) &&
       ((*(uint *)(param_1 + 0x16) & 4) != 0)) {
      uVar6 = *(uint *)(param_1 + 0x16) ^ 4;
      *(uint *)(param_1 + 0x16) = uVar6;
      if ((uVar6 & 1) != 0) {
        pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,(int *)&local_34);
        DAT_12039a9c = (*pcVar5)(CONCAT22(uStack_32,local_34),param_1,0);
        *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 1;
      }
      return 0;
    }
    return 0x10000;
  }
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 4;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  pcVar5 = (code *)FUN_12027370(param_1,0,0x20,&local_3c);
  DAT_12039a9c = (*pcVar5)(local_3c,puVar1);
  if ((*(byte *)(param_1 + 0x16) & 2) != 0) {
    local_34 = 0x69;
    uStack_2e = 0;
    uStack_2a = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_26 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_3c);
    DAT_12039a9c = (*pcVar5)(local_3c,*puVar1,s_scene_120379d8,0,&local_34);
    uVar3 = CONCAT22(uStack_30,uStack_32);
    local_34 = 10;
    uStack_30 = 0;
    uStack_32 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_38);
    DAT_12039a9c = (*pcVar5)(iStack_38,uVar3,s_position_120379c4,0,&local_34);
    uVar4 = uStack_32;
    local_3c = CONCAT22(local_3c._2_2_,uStack_30);
    local_34 = 10;
    uStack_30 = 0;
    uStack_32 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_8);
    DAT_12039a9c = (*pcVar5)(iStack_8,uVar3,&DAT_120379b0,0,&local_34);
    *(undefined2 *)(param_1 + 0x38) = 0xd;
    *(undefined2 *)(param_1 + 0x3a) = uVar4;
    *(undefined2 *)(param_1 + 0x3c) = (undefined2)local_3c;
    *(undefined2 *)(param_1 + 0x3e) = uStack_32;
    *(undefined2 *)(param_1 + 0x40) = uStack_30;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,0,&iStack_4);
    DAT_12039a9c = (*pcVar5)(iStack_4,param_1,0,10,CONCAT22(extraout_var,1),0);
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
    return 0;
  }
  local_34 = 1;
  if (*(int *)(param_1 + 0x34) != 0) {
    uStack_32 = 0;
    uStack_30 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_3c);
    DAT_12039a9c = (*pcVar5)(local_3c,*puVar1,s_balance_1203799c,0,&local_34);
    if (DAT_12039a9c == 0) {
      *(int *)(param_1 + 0x4e) = *(int *)(param_1 + 0x34) / 10;
      local_3c = *(int *)(param_1 + 0x1c) - CONCAT22(uStack_30,uStack_32);
      *(double *)(param_1 + 0x44) = (double)local_3c / (double)*(int *)(param_1 + 0x4e);
      pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,0,&iStack_38);
      DAT_12039a9c = (*pcVar5)(iStack_38,param_1,0,10,CONCAT22(extraout_var_00,1),0);
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
      return 0;
    }
    return 0x10000;
  }
  uStack_32 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  uStack_30 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10);
  pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_3c);
  DAT_12039a9c = (*pcVar5)(local_3c,*puVar1,s_balance_1203799c,0,&local_34);
  return 0;
}


