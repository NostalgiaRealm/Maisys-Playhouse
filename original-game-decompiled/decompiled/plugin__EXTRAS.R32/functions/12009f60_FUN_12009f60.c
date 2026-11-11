
/* ==== FUN_12009f60 @ 12009f60 ==== 
 * signature: undefined4 __cdecl FUN_12009f60(undefined4 param_1)
 * body: 12009f60-1200a081
 */

undefined4 __cdecl FUN_12009f60(undefined4 param_1)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_1,s_events_120370e8,0x17,0xd);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_destination_1203739c,10,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_speed_12037388,0xf,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_duration_12037374,0xf,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_updaterate_12037360,1,6);
  return 0;
}


