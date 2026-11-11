
/* ==== FUN_0047d820 @ 0047d820 ==== 
 * signature: undefined __thiscall FUN_0047d820(void * this, undefined4 param_1, int param_2)
 * body: 0047d820-0047d861
 */

void __thiscall FUN_0047d820(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + 0x56) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((int)this + 0x52) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)this + 0x4a) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_2 + 0x24);
  if ((*(byte *)(param_2 + 0x16) & 0xb) != 0) {
    *(byte *)((int)this + 0x6a) = *(byte *)((int)this + 0x6a) | 0x40;
    (**(code **)(*(int *)this + 0x160))(0xb,1);
  }
  return;
}


