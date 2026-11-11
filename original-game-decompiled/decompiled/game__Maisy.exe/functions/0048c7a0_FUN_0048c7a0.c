
/* ==== FUN_0048c7a0 @ 0048c7a0 ==== 
 * signature: undefined4 __cdecl FUN_0048c7a0(int param_1, undefined4 * param_2)
 * body: 0048c7a0-0048c7c9
 */

undefined4 __cdecl FUN_0048c7a0(int param_1,undefined4 *param_2)

{
  if ((param_2 != (undefined4 *)0x0) && ((*(byte *)(param_1 + 0x21) & 0x20) != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x50);
    return 0;
  }
  *param_2 = 0;
  return 0x10000;
}


