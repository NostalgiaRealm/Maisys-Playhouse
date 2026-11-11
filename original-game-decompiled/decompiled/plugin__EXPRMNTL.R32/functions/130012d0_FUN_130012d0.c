
/* ==== FUN_130012d0 @ 130012d0 ==== 
 * signature: undefined4 __cdecl FUN_130012d0(undefined4 param_1)
 * body: 130012d0-13001317
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130012d0(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,s_events_1300804c,0x17,0xc);
  return 0;
}


