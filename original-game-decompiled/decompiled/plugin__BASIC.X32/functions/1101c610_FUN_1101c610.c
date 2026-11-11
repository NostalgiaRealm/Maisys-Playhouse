
/* ==== FUN_1101c610 @ 1101c610 ==== 
 * signature: undefined __cdecl FUN_1101c610(undefined4 param_1, undefined2 * param_2, undefined4 param_3, char param_4)
 * body: 1101c610-1101c63c
 */

void __cdecl FUN_1101c610(undefined4 param_1,undefined2 *param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\0') {
    *param_2 = 0x19;
    *(undefined4 *)(param_2 + 1) = param_3;
    return;
  }
  *param_2 = 0x1fc;
  *(undefined4 *)(param_2 + 3) = param_3;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  return;
}


