
/* ==== FUN_0047d510 @ 0047d510 ==== 
 * signature: undefined4 __thiscall FUN_0047d510(void * this, short * param_1)
 * body: 0047d510-0047d550
 */

undefined4 __thiscall FUN_0047d510(void *this,short *param_1)

{
  if (*param_1 == 1) {
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 5);
    return 0;
  }
  if (*param_1 != 2) {
    return 0x10000;
  }
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 5);
  return 0;
}


