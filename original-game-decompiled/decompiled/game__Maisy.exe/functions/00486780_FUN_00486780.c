
/* ==== FUN_00486780 @ 00486780 ==== 
 * signature: undefined4 __cdecl FUN_00486780(int param_1)
 * body: 00486780-004867ba
 */

undefined4 __cdecl FUN_00486780(int param_1)

{
  code *pcVar1;
  int local_c;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_00486ce0(local_8);
  return 0;
}


