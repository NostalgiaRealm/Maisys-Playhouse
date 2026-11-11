
/* ==== FUN_0040b650 @ 0040b650 ==== 
 * signature: undefined __cdecl FUN_0040b650(undefined4 * param_1, undefined4 * param_2)
 * body: 0040b650-0040b66f
 */

void __cdecl FUN_0040b650(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


