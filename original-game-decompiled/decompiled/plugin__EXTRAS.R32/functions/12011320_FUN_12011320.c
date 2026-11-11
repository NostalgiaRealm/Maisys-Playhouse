
/* ==== FUN_12011320 @ 12011320 ==== 
 * signature: undefined4 __cdecl FUN_12011320(short * param_1)
 * body: 12011320-12011336
 */

undefined4 __cdecl FUN_12011320(short *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (short *)0x0) && (*param_1 == 1)) {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  return uVar1;
}


