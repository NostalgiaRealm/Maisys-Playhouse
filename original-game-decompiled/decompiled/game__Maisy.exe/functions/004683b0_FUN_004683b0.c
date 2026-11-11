
/* ==== FUN_004683b0 @ 004683b0 ==== 
 * signature: undefined4 __cdecl FUN_004683b0(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 004683b0-004683cd
 */

undefined4 __cdecl FUN_004683b0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  if (param_2 == 0) {
    return 0x10001;
  }
  *param_3 = *(undefined4 *)(param_2 + 0x26);
  return 0;
}


