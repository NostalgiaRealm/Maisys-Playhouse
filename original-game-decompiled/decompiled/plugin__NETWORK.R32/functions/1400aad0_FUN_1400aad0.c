
/* ==== FUN_1400aad0 @ 1400aad0 ==== 
 * signature: undefined4 __cdecl FUN_1400aad0(undefined4 param_1)
 * body: 1400aad0-1400ab17
 */

undefined4 __cdecl FUN_1400aad0(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,s_events_140260f8,0x17,0xd);
  return 0;
}


