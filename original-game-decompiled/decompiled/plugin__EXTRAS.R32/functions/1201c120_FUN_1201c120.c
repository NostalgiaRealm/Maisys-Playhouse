
/* ==== FUN_1201c120 @ 1201c120 ==== 
 * signature: undefined4 __cdecl FUN_1201c120(undefined4 param_1)
 * body: 1201c120-1201c167
 */

undefined4 __cdecl FUN_1201c120(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,s_events_120370e8,0x17,0xd);
  return 0;
}


