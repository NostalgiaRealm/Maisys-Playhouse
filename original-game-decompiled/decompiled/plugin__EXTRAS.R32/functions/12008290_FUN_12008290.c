
/* ==== FUN_12008290 @ 12008290 ==== 
 * signature: undefined4 __cdecl FUN_12008290(undefined4 param_1)
 * body: 12008290-1200837d
 */

undefined4 __cdecl FUN_12008290(undefined4 param_1)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_10);
  DAT_12039a9c = (*pcVar1)(local_10,param_1,s_events_120370e8,0x17,0xf);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_filepath_120371c4,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_addtoreturnlist_120372c4,0x14,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_close_120372b0,0x14,7);
  return 0;
}


