
/* ==== FUN_1400a280 @ 1400a280 ==== 
 * signature: undefined4 __cdecl FUN_1400a280(undefined4 param_1)
 * body: 1400a280-1400a339
 */

undefined4 __cdecl FUN_1400a280(undefined4 param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,&DAT_14026584,0x66,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,&DAT_14026570,0x14,2);
  return 0;
}


