
/* ==== FUN_12021170 @ 12021170 ==== 
 * signature: undefined4 __cdecl FUN_12021170(undefined4 param_1)
 * body: 12021170-12021291
 */

undefined4 __cdecl FUN_12021170(undefined4 param_1)

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
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_windowtitle_12037c64,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_windowstyle_12037c50,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_windowsize_12037c3c,10,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_windowposition_12037c28,10,4);
  return 0;
}


