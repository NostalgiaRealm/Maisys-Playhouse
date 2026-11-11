
/* ==== FUN_004a60fb @ 004a60fb ==== 
 * signature: undefined4 __stdcall FUN_004a60fb(undefined1 * param_1, int param_2, undefined4 * param_3)
 * body: 004a60fb-004a611d
 */

undefined4 FUN_004a60fb(undefined1 *param_1,int param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((param_2 != 0) && (param_1 != (undefined1 *)0x0)) {
    *param_1 = 0;
  }
  return 0;
}


