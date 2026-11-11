
/* ==== FUN_00486600 @ 00486600 ==== 
 * signature: undefined __cdecl FUN_00486600(int param_1, undefined4 param_2, int param_3)
 * body: 00486600-00486643
 */

void __cdecl FUN_00486600(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int local_c;
  void *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_004862b0(local_8,param_2,param_3 << 2);
  return;
}


