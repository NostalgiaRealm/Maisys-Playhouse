
/* ==== FUN_1200a750 @ 1200a750 ==== 
 * signature: undefined4 __cdecl FUN_1200a750(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 1200a750-1200a963
 */

undefined4 __cdecl FUN_1200a750(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_28);
  DAT_12039a9c = (*pcVar1)(local_28,param_1,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1 + 10,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x14,&local_2c);
  iVar2 = *param_4 + local_2c;
  *param_4 = iVar2;
  *param_4 = iVar2 + 2;
  *param_4 = iVar2 + 4;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x20,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x2a,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x34,&local_2c);
  iVar2 = *param_4;
  *param_4 = iVar2 + local_2c;
  *param_4 = iVar2 + local_2c + 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x3e,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x48,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x5a,&local_2c);
  *param_4 = *param_4 + local_2c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x86,&local_2c);
  *param_4 = *param_4 + local_2c;
  return 0;
}


