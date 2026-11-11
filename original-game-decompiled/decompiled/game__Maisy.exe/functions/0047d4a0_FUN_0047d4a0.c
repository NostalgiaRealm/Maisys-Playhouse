
/* ==== FUN_0047d4a0 @ 0047d4a0 ==== 
 * signature: undefined4 __thiscall FUN_0047d4a0(void * this, short * param_1)
 * body: 0047d4a0-0047d506
 */

undefined4 __thiscall FUN_0047d4a0(void *this,short *param_1)

{
  byte bVar1;
  
  if (*param_1 == 1) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)this + 0x54);
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((int)this + 0x58);
    param_1[2] = 0;
    *(byte *)(param_1 + 1) = bVar1 & 0xfe;
    *(byte *)(param_1 + 1) = bVar1 & 0xfe | 2;
    return 0;
  }
  if (*param_1 != 2) {
    return 0x10000;
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)this + 0x5c);
  bVar1 = *(byte *)(param_1 + 1);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((int)this + 0x60);
  param_1[2] = 1;
  *(byte *)(param_1 + 1) = bVar1 & 0xfe;
  *(byte *)(param_1 + 1) = bVar1 & 0xfe | 2;
  return 0;
}


