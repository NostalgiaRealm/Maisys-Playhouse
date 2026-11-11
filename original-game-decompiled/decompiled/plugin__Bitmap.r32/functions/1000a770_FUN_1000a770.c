
/* ==== FUN_1000a770 @ 1000a770 ==== 
 * signature: undefined __cdecl FUN_1000a770(undefined4 * param_1, undefined4 * param_2)
 * body: 1000a770-1000a78f
 */

void __cdecl FUN_1000a770(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


