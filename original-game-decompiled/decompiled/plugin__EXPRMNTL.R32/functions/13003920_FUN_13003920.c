
/* ==== FUN_13003920 @ 13003920 ==== 
 * signature: undefined __cdecl FUN_13003920(undefined4 param_1, undefined4 param_2)
 * body: 13003920-13003966
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003920(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0x1c,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,param_2,&stack0x0000000c);
  return;
}


