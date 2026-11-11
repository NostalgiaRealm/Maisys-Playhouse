
/* ==== FUN_0048ec50 @ 0048ec50 ==== 
 * signature: undefined __cdecl FUN_0048ec50(short * param_1, short * param_2)
 * body: 0048ec50-0048ec80
 */

void __cdecl FUN_0048ec50(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return;
}


