
/* ==== FUN_10008823 @ 10008823 ==== 
 * signature: undefined4 __cdecl FUN_10008823(undefined4 param_1, undefined4 param_2)
 * body: 10008823-1000887f
 */

undefined4 __cdecl FUN_10008823(undefined4 param_1,undefined4 param_2)

{
  int local_10;
  code *local_c;
  undefined1 *local_8;
  
  local_8 = &stack0x0000000c;
  local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0x1c,&local_10);
  DAT_100173bc = (*local_c)(local_10,param_1,param_2,local_8);
  return DAT_100173bc;
}


