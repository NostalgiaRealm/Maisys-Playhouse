
/* ==== FUN_12002720 @ 12002720 ==== 
 * signature: undefined4 __cdecl FUN_12002720(int param_1, undefined4 param_2, undefined4 param_3, short param_4)
 * body: 12002720-1200273b
 */

undefined4 __cdecl FUN_12002720(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  if ((param_4 == 0xf) && (100 < *(int *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x1c) = 100;
  }
  return 0;
}


