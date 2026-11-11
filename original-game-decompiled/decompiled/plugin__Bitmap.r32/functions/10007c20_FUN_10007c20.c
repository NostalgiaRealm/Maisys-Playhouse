
/* ==== FUN_10007c20 @ 10007c20 ==== 
 * signature: undefined __cdecl FUN_10007c20(SIZE_T param_1)
 * body: 10007c20-10007c36
 */

void __cdecl FUN_10007c20(SIZE_T param_1)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  GlobalAlloc(0x40,param_1);
  return;
}


