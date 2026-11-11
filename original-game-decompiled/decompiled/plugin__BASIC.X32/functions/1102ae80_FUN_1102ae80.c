
/* ==== FUN_1102ae80 @ 1102ae80 ==== 
 * signature: undefined4 __cdecl FUN_1102ae80(int param_1)
 * body: 1102ae80-1102aea9
 */

undefined4 __cdecl FUN_1102ae80(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = DAT_11036590;
      DAT_11036590 = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_11036590;
    }
  }
  return 0xffffffff;
}


