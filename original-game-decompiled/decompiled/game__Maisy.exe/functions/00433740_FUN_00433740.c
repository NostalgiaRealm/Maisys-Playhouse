
/* ==== FUN_00433740 @ 00433740 ==== 
 * signature: undefined4 __cdecl FUN_00433740(int param_1, int param_2)
 * body: 00433740-0043375a
 */

undefined4 __cdecl FUN_00433740(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return 0;
}


