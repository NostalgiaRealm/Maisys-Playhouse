
/* ==== FUN_120166c0 @ 120166c0 ==== 
 * signature: undefined4 __cdecl FUN_120166c0(undefined4 param_1)
 * body: 120166c0-120167e1
 */

undefined4 __cdecl FUN_120166c0(undefined4 param_1)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_1,s_value_120370b8,0x69,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,&DAT_12037340,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_fullpath_120378f8,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_object_120378e4,0x69,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_events_120370e8,0x17,0xf);
  return 0;
}


