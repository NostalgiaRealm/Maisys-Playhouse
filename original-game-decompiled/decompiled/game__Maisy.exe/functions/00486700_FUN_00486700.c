
/* ==== FUN_00486700 @ 00486700 ==== 
 * signature: undefined __cdecl FUN_00486700(int param_1, short * param_2)
 * body: 00486700-0048673c
 */

void __cdecl FUN_00486700(int param_1,short *param_2)

{
  code *pcVar1;
  int local_c;
  void *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_00485ed0(local_8,param_2);
  return;
}


