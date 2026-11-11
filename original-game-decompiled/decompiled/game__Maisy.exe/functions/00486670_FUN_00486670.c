
/* ==== FUN_00486670 @ 00486670 ==== 
 * signature: undefined __cdecl FUN_00486670(int param_1, undefined2 * param_2, int * param_3)
 * body: 00486670-004866b2
 */

void __cdecl FUN_00486670(int param_1,undefined2 *param_2,int *param_3)

{
  code *pcVar1;
  int local_c;
  void *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_00485410(local_8,param_2,param_3,1);
  return;
}


