
/* ==== FUN_004866c0 @ 004866c0 ==== 
 * signature: undefined __cdecl FUN_004866c0(int param_1, char * param_2)
 * body: 004866c0-004866fc
 */

void __cdecl FUN_004866c0(int param_1,char *param_2)

{
  code *pcVar1;
  int local_c;
  void *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  FUN_00485db0(local_8,param_2);
  return;
}


