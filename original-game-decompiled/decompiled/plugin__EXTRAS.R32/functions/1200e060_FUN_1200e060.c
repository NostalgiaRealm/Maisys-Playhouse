
/* ==== FUN_1200e060 @ 1200e060 ==== 
 * signature: undefined4 __cdecl FUN_1200e060(undefined4 param_1)
 * body: 1200e060-1200e3e2
 */

undefined4 __cdecl FUN_1200e060(undefined4 param_1)

{
  code *pcVar1;
  int local_44;
  int iStack_40;
  int iStack_3c;
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
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_44);
  DAT_12039a9c = (*pcVar1)(local_44,param_1,s_events_120370e8,0x17,0xd);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_40);
  DAT_12039a9c = (*pcVar1)(iStack_40,param_1,s_tempo_120373f8,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_3c);
  DAT_12039a9c = (*pcVar1)(iStack_3c,param_1,s_volume_12037428,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_38);
  DAT_12039a9c = (*pcVar1)(iStack_38,param_1,&DAT_120373e0,0x14,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_34);
  DAT_12039a9c = (*pcVar1)(iStack_34,param_1,s_reset_12037410,0,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_30);
  DAT_12039a9c = (*pcVar1)(iStack_30,param_1,&DAT_120373c8,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_2c);
  DAT_12039a9c = (*pcVar1)(iStack_2c,param_1,s_balance_12037458,1,3);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_28);
  DAT_12039a9c = (*pcVar1)(iStack_28,param_1,s_transposing_120374d0,0x14,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1,s_mutetrack_12037488,0x14,10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1,s_solotrack_120374a0,0x14,10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1,s_transpose_120374b8,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1,s_playnote_12037470,0,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1,s_notechannel_120374e8,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_noteprogram_12037500,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_notenum_12037440,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_notevelocity_12037518,1,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_noteduration_12037530,0xf,2);
  return 0;
}


