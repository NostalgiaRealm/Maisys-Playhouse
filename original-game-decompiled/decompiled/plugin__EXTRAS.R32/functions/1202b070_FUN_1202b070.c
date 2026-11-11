
/* ==== FUN_1202b070 @ 1202b070 ==== 
 * signature: undefined4 __cdecl FUN_1202b070(int param_1)
 * body: 1202b070-1202b099
 */

undefined4 __cdecl FUN_1202b070(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = DAT_12037e60;
      DAT_12037e60 = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_12037e60;
    }
  }
  return 0xffffffff;
}


