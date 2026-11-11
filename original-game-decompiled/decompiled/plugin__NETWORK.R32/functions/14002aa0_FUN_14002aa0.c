
/* ==== FUN_14002aa0 @ 14002aa0 ==== 
 * signature: undefined __cdecl FUN_14002aa0(undefined4 param_1, undefined4 param_2)
 * body: 14002aa0-14002e11
 */

void __cdecl FUN_14002aa0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
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
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&local_38);
  DAT_14028e48 = (*pcVar1)(local_38,param_1,param_2,s_Net_Messaging_14026208,0x835,
                           s_Network_Failed_14026218,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_34);
  DAT_14028e48 = (*pcVar1)(iStack_34,param_1,param_2,s_Net_Messaging_14026208,0,&DAT_14026204,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_30);
  DAT_14028e48 = (*pcVar1)(iStack_30,param_1,param_2,s_Net_Messaging_14026208,0x89a,
                           s_Host_Name_Found_140261f4,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1,param_2,s_Net_Messaging_14026208,0x89b,
                           s_Host_Name_Not_Found_140261e0,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1,param_2,s_Net_Messaging_14026208,0,&DAT_14026204,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1,param_2,s_Net_Messaging_14026208,0x89c,
                           s_Connection_Opened_140261cc,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1,param_2,s_Net_Messaging_14026208,0x89f,
                           s_Connection_Closed_140261b8,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,param_2,s_Net_Messaging_14026208,0x89d,
                           s_Connection_Timed_Out_140261a0,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1,param_2,s_Net_Messaging_14026208,0x8a0,
                           s_Connection_Broken_1402618c,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,param_2,s_Net_Messaging_14026208,0x89e,
                           s_Max_Connections_Exceeded_14026170,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1,param_2,s_Net_Operation_14026148,0x8fd,
                           s_Net_Operation_Completed_14026158,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,param_2,s_Net_Operation_14026148,0x8fe,
                           s_Net_Operation_Failed_14026130,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_2,s_Net_Operation_14026148,0x8ff,
                           s_Net_Operation_Stopped_14026118,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_2,s_Net_Operation_14026148,0x900,
                           s__Working____1402610c,3);
  return;
}


