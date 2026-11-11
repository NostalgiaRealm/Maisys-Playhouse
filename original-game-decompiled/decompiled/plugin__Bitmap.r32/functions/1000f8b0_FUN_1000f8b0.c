
/* ==== FUN_1000f8b0 @ 1000f8b0 ==== 
 * signature: undefined4 __stdcall FUN_1000f8b0(uint param_1)
 * body: 1000f8b0-1000f8b0
 */

undefined4 FUN_1000f8b0(uint param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_1000a3c0(param_1);
  uVar1 = FUN_1000f8f0((int *)param_1);
  FUN_1000a430(param_1);
  return uVar1;
}


