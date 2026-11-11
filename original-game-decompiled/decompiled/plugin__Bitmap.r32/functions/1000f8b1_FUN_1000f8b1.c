
/* ==== FUN_1000f8b1 @ 1000f8b1 ==== 
 * signature: undefined FUN_1000f8b1(void)
 * body: 1000f8b1-1000f8ec
 */

undefined4 FUN_1000f8b1(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
    param_2[3] = 0;
    return 0xffffffff;
  }
  FUN_1000a3c0((uint)param_2);
  uVar1 = FUN_1000f8f0(param_2);
  FUN_1000a430((uint)param_2);
  return uVar1;
}


