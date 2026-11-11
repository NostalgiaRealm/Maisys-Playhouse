
/* ==== FUN_1401bc30 @ 1401bc30 ==== 
 * signature: undefined4 __cdecl FUN_1401bc30(int param_1)
 * body: 1401bc30-1401bc59
 */

undefined4 __cdecl FUN_1401bc30(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = DAT_14026e4c;
      DAT_14026e4c = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_14026e4c;
    }
  }
  return 0xffffffff;
}


