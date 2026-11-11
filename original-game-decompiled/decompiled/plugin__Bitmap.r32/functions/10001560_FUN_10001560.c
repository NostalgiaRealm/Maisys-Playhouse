
/* ==== FUN_10001560 @ 10001560 ==== 
 * signature: undefined4 __cdecl FUN_10001560(int param_1, int param_2)
 * body: 10001560-100017ca
 */

undefined4 __cdecl FUN_10001560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_50;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined2 local_44;
  int local_42;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  
  iVar2 = param_1;
  uVar3 = 0x10000;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x38) != 0) {
      local_44 = 3;
      local_42 = param_1;
      local_3e = 1;
      local_3c = 0;
      local_36 = 0;
      local_3a = 0;
      local_32 = 0;
      pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,&param_1);
      uStack_4c = 1;
      uStack_4a = 0;
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,7,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,param_1,&local_44,&uStack_4c);
      pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,1);
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x24,&param_2);
      DAT_100173bc = (*pcVar4)(param_2,param_1,local_3a);
      return 0;
    }
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,&param_2);
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_globalposition_1001307c,0,&uStack_2c);
    iVar6 = (int)uStack_2a._2_2_;
    iVar5 = (int)(short)uStack_2a;
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_height_10013068,0,&uStack_2c);
    iVar1 = uStack_2a + iVar6;
    uStack_2c = 0x6a;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,&local_50);
    DAT_100173bc = (*pcVar4)(local_50,param_2,s_width_10013054,0,&uStack_2c);
    FUN_100017d0(iVar2,iVar5,iVar6,uStack_2a + iVar5,iVar1);
    uVar3 = 0;
  }
  return uVar3;
}


