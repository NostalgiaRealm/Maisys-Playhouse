
/* ==== FUN_004745b0 @ 004745b0 ==== 
 * signature: undefined4 __thiscall FUN_004745b0(void * this, int * param_1)
 * body: 004745b0-004745d0
 */

undefined4 __thiscall FUN_004745b0(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046e150(this,param_1);
  if (((short)uVar1 == 0) && ((*(byte *)((int)param_1 + 0x1e) & 4) != 0)) {
    uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),8);
  }
  return uVar1;
}


