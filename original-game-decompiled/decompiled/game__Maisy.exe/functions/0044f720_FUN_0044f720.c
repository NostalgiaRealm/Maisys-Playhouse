
/* ==== FUN_0044f720 @ 0044f720 ==== 
 * signature: undefined __thiscall FUN_0044f720(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, int param_4, byte * param_5, short * param_6)
 * body: 0044f720-0044f7a8
 */

void __thiscall
FUN_0044f720(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            byte *param_5,short *param_6)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((int)this + 0x156);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x14e);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)this + 0x152);
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)((int)this + 0x15c) & 1;
  }
  if (param_6 != (short *)0x0) {
    *param_6 = (-(ushort)((*(byte *)((int)this + 0x15c) & 4) == 0) & 0x8002) + 0x7fff;
  }
  if (param_4 != 0) {
    *(bool *)param_4 = (*(uint *)((int)this + 0x26) & 0x1000000) == 0;
  }
  return;
}


