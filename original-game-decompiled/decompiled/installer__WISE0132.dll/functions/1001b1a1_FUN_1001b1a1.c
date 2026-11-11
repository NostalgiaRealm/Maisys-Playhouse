
/* ==== FUN_1001b1a1 @ 1001b1a1 ==== 
 * signature: undefined FUN_1001b1a1(void)
 * body: 1001b1a1-1001b1dc
 */

undefined4 FUN_1001b1a1(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
    param_2[3] = 0;
    return 0xffffffff;
  }
  FUN_10016ec0((uint)param_2);
  uVar1 = FUN_1001b1e0(param_2);
  FUN_10016f30((uint)param_2);
  return uVar1;
}


