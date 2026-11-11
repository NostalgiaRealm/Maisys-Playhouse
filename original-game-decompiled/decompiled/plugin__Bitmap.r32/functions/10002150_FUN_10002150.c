
/* ==== FUN_10002150 @ 10002150 ==== 
 * signature: undefined4 __cdecl FUN_10002150(int param_1, int param_2)
 * body: 10002150-10002425
 */

undefined4 __cdecl FUN_10002150(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_2c;
  undefined2 uStack_28;
  undefined4 uStack_26;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  undefined2 uStack_18;
  int iStack_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  iVar2 = param_1;
  uVar3 = 0x10000;
  iVar1 = *(int *)(param_2 + 0xc);
  if ((iVar1 == *(int *)(param_1 + 2)) && (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,&param_2);
    param_1 = 0;
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,iVar2 + 0x14,iVar2,&param_1,0);
    uStack_28 = 1;
    uStack_26 = 0;
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x16,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,s_height_10013068,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,s_height_10013068,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x16,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,s_width_10013054,0,&uStack_28);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,6,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,s_width_10013054,0,&uStack_28);
    if (*(char *)(iVar2 + 0x40) == '\0') {
      uStack_20 = 1;
      uStack_1e = 0;
      uStack_18 = 1;
      iStack_16 = iVar2;
      uStack_12 = 1;
      uStack_10 = 0;
      uStack_a = 0;
      uStack_e = 0;
      uStack_6 = 0;
      pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,7,&local_2c);
      DAT_100173bc = (*pcVar4)(local_2c,param_2,&uStack_18,&uStack_20);
      *(undefined1 *)(iVar2 + 0x40) = 1;
      *(undefined4 *)(iVar2 + 0x42) = uStack_e;
    }
    pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,0);
    return 0;
  }
  if ((((iVar1 == *(int *)(param_1 + 0xc)) && (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))
       ) || (iVar1 == 0x7d2)) && (*(char *)(param_1 + 0x40) != '\0')) {
    pcVar4 = (code *)FUN_100089c7(param_1,0,0x20,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,&param_2);
    pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x24,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,param_2,*(undefined4 *)(iVar2 + 0x42));
    pcVar4 = (code *)FUN_100089c7(iVar2,0,0x29,&local_2c);
    DAT_100173bc = (*pcVar4)(local_2c,0);
    *(undefined1 *)(iVar2 + 0x40) = 0;
    uVar3 = 0;
  }
  return uVar3;
}


