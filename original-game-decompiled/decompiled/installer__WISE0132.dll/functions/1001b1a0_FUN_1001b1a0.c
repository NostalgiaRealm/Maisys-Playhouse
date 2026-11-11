
/* ==== FUN_1001b1a0 @ 1001b1a0 ==== 
 * signature: undefined4 __stdcall FUN_1001b1a0(uint param_1)
 * body: 1001b1a0-1001b1a0
 */

undefined4 FUN_1001b1a0(uint param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_10016ec0(param_1);
  uVar1 = FUN_1001b1e0((int *)param_1);
  FUN_10016f30(param_1);
  return uVar1;
}


