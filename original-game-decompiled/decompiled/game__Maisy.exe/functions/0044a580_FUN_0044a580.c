
/* ==== FUN_0044a580 @ 0044a580 ==== 
 * signature: uint __stdcall FUN_0044a580(int param_1)
 * body: 0044a580-0044a599
 */

uint FUN_0044a580(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_0048ce85();
  }
  return uVar1 & 0xffffff00;
}


