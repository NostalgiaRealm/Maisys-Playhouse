
/* ==== FUN_1200abb0 @ 1200abb0 ==== 
 * signature: undefined4 __cdecl FUN_1200abb0(int param_1, int param_2)
 * body: 1200abb0-1200b103
 */

undefined4 __cdecl FUN_1200abb0(int param_1,int param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  short local_40;
  short sStack_3e;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar2 = (code *)FUN_12027370(param_2,1,8,&local_3c);
  DAT_12039a9c = (*pcVar2)(local_3c,&local_40,1);
  if (local_40 == 1) {
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_3c);
    DAT_12039a9c = (*pcVar2)(local_3c,param_1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_38);
    DAT_12039a9c = (*pcVar2)(iStack_38,param_1 + 10);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_34);
    DAT_12039a9c = (*pcVar2)(iStack_34,param_1 + 0x14);
    pcVar2 = (code *)FUN_12027370(param_2,1,8,&iStack_30);
    DAT_12039a9c = (*pcVar2)(iStack_30,param_1 + 0x1a,1);
    pcVar2 = (code *)FUN_12027370(param_2,1,8,&iStack_2c);
    DAT_12039a9c = (*pcVar2)(iStack_2c,&sStack_3e,1);
    *(int *)(param_1 + 0x1c) = (int)sStack_3e;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_28);
    DAT_12039a9c = (*pcVar2)(iStack_28,param_1 + 0x20);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_24);
    DAT_12039a9c = (*pcVar2)(iStack_24,param_1 + 0x2a);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_20);
    DAT_12039a9c = (*pcVar2)(iStack_20,param_1 + 0x34);
    pcVar2 = (code *)FUN_12027370(param_2,1,8,&iStack_1c);
    DAT_12039a9c = (*pcVar2)(iStack_1c,&sStack_3e,1);
    *(int *)(param_1 + 0x3a) = (int)sStack_3e;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar2)(iStack_18,param_1 + 0x3e);
    puVar1 = (undefined2 *)(param_1 + 0x48);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_14);
    DAT_12039a9c = (*pcVar2)(iStack_14,0,puVar1);
    *puVar1 = 100;
    *(undefined4 *)(param_1 + 0x4a) = 0xc9;
    *(undefined4 *)(param_1 + 0x4e) = 5;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar2)(iStack_10,puVar1);
    puVar1 = (undefined2 *)(param_1 + 0x5a);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_c);
    DAT_12039a9c = (*pcVar2)(iStack_c,param_1,puVar1);
    *puVar1 = 0;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar2)(iStack_8,puVar1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x86);
    return 0;
  }
  if (local_40 == 0) {
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_3c);
    DAT_12039a9c = (*pcVar2)(local_3c,param_1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_38);
    DAT_12039a9c = (*pcVar2)(iStack_38,param_1 + 10);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_34);
    DAT_12039a9c = (*pcVar2)(iStack_34,param_1 + 0x14);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_30);
    DAT_12039a9c = (*pcVar2)(iStack_30,param_1 + 0x1a,2);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_2c);
    DAT_12039a9c = (*pcVar2)(iStack_2c,param_1 + 0x1c,4);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_28);
    DAT_12039a9c = (*pcVar2)(iStack_28,param_1 + 0x20);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_24);
    DAT_12039a9c = (*pcVar2)(iStack_24,param_1 + 0x2a);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_20);
    DAT_12039a9c = (*pcVar2)(iStack_20,param_1 + 0x34);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_1c);
    DAT_12039a9c = (*pcVar2)(iStack_1c,param_1 + 0x3a,4);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar2)(iStack_18,param_1 + 0x3e);
    puVar1 = (undefined2 *)(param_1 + 0x48);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_14);
    DAT_12039a9c = (*pcVar2)(iStack_14,0,puVar1);
    *puVar1 = 100;
    *(undefined4 *)(param_1 + 0x4a) = 0xc9;
    *(undefined4 *)(param_1 + 0x4e) = 5;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar2)(iStack_10,puVar1);
    puVar1 = (undefined2 *)(param_1 + 0x5a);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_c);
    DAT_12039a9c = (*pcVar2)(iStack_c,param_1,puVar1);
    *puVar1 = 0;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar2)(iStack_8,puVar1);
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x86);
    return 0;
  }
  return 0x10000;
}


