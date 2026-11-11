
/* ==== FUN_12002a40 @ 12002a40 ==== 
 * signature: undefined4 __cdecl FUN_12002a40(int param_1, int param_2)
 * body: 12002a40-12002cde
 */

undefined4 __cdecl FUN_12002a40(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 extraout_var;
  int iVar4;
  int local_10;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_4;
  
  iVar4 = *(int *)(param_2 + 0xc);
  if (((*(int *)(param_1 + 2) != iVar4) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) ||
     (*(int *)(param_1 + 2) == 0x7d2)) {
    if ((((*(int *)(param_1 + 0xc) == iVar4) &&
         (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) || (iVar4 == 0x7d2)) &&
       ((*(uint *)(param_1 + 0x16) & 4) != 0)) {
      uVar3 = *(uint *)(param_1 + 0x16) ^ 4;
      *(uint *)(param_1 + 0x16) = uVar3;
      if ((uVar3 & 1) != 0) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,(int *)&local_c);
        DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_a,local_c),param_1,0);
        *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 1;
      }
      return 0;
    }
    return 0x10000;
  }
  puVar1 = (undefined4 *)(param_1 + 0x62);
  pcVar2 = (code *)FUN_12027370(param_1,0,0x20,&local_10);
  DAT_12039a9c = (*pcVar2)(local_10,puVar1);
  local_c = 1;
  uStack_a = 0;
  uStack_8 = 0;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_4);
  DAT_12039a9c = (*pcVar2)(iStack_4,*puVar1,s_volume_12037108,0,&local_c);
  if (DAT_12039a9c != 0) {
    return 0x10000;
  }
  *(undefined2 *)(param_1 + 0x38) = 1;
  iVar4 = 100;
  if ((*(uint *)(param_1 + 0x16) & 2) != 0) {
    iVar4 = CONCAT22(uStack_8,uStack_a);
  }
  iVar4 = (*(int *)(param_1 + 0x1c) * iVar4) / 100;
  *(int *)(param_1 + 0x3a) = iVar4;
  if (100 < iVar4) {
    *(undefined4 *)(param_1 + 0x3a) = 100;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined2 *)(param_1 + 0x3e) = 1;
    *(uint *)(param_1 + 0x40) = CONCAT22(uStack_8,uStack_a);
    local_10 = *(int *)(param_1 + 0x3a) - CONCAT22(uStack_8,uStack_a);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x34) / 10;
    *(double *)(param_1 + 0x46) = ((double)local_10 / (double)*(int *)(param_1 + 0x34)) * 10.0;
    if ((*(uint *)(param_1 + 0x16) & 1) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_10);
      DAT_12039a9c = (*pcVar2)(local_10,param_1,0);
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 1;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,0,&local_10);
    DAT_12039a9c = (*pcVar2)(local_10,param_1,0,10,CONCAT22(extraout_var,1),0);
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 5;
    return 0;
  }
  local_c = 1;
  uStack_a = (undefined2)*(undefined4 *)(param_1 + 0x3a);
  uStack_8 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x3a) >> 0x10);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_10);
  DAT_12039a9c = (*pcVar2)(local_10,*puVar1,s_volume_12037108,0,&local_c);
  return 0;
}


