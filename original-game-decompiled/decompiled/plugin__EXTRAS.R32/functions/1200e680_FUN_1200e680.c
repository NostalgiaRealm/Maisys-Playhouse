
/* ==== FUN_1200e680 @ 1200e680 ==== 
 * signature: undefined4 __cdecl FUN_1200e680(undefined4 param_1)
 * body: 1200e680-1200e83d
 */

undefined4 __cdecl FUN_1200e680(undefined4 param_1)

{
  code *pcVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_20);
  DAT_12039a9c = (*pcVar1)(local_20,param_1,s_events_120370e8,0x17,0xd);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1,s_textfont_120375f8,0x66,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1,s_textsize_120375e4,1,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1,s_textstyle_120375d0,1,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_textstring_120375bc,0x66,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_textposition_120375a8,1,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_filepath_120371c4,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_showdialog_12037594,0x14,6);
  return 0;
}


