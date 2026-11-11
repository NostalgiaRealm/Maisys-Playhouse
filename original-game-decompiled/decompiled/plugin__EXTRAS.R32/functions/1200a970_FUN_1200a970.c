
/* ==== FUN_1200a970 @ 1200a970 ==== 
 * signature: undefined4 __cdecl FUN_1200a970(int param_1, int param_2)
 * body: 1200a970-1200abac
 */

undefined4 __cdecl FUN_1200a970(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_3c;
  undefined2 uStack_3a;
  int local_38;
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
  
  local_3c = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_38);
  DAT_12039a9c = (*pcVar1)(local_38,&local_3c,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_34);
  DAT_12039a9c = (*pcVar1)(iStack_34,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_30);
  DAT_12039a9c = (*pcVar1)(iStack_30,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_2c);
  DAT_12039a9c = (*pcVar1)(iStack_2c,param_1 + 0x14);
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&iStack_28);
  DAT_12039a9c = (*pcVar1)(iStack_28,param_1 + 0x1a,1);
  uStack_3a = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,&uStack_3a,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x20);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x2a);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x34);
  uStack_3a = (undefined2)*(undefined4 *)(param_1 + 0x3a);
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,&uStack_3a,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x3e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x48);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x5a);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x86);
  return 0;
}


