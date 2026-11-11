
/* ==== FUN_0044f360 @ 0044f360 ==== 
 * signature: undefined4 __stdcall FUN_0044f360(int param_1)
 * body: 0044f360-0044f381
 */

int FUN_0044f360(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (((param_1 != 0x10) && (param_1 != 0xf)) && (param_1 != 0xe)) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}


