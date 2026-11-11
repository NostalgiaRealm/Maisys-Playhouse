
/* ==== FUN_14001e50 @ 14001e50 ==== 
 * signature: undefined4 __cdecl FUN_14001e50(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 14001e50-140020b0
 */

undefined4 __cdecl FUN_14001e50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_34;
  int local_30;
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
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,param_1 + 4,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1 + 0xe,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1 + 0x2a,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1 + 0x30,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1 + 0x42,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66,&local_34);
  *param_4 = *param_4 + local_34;
  return 0;
}


