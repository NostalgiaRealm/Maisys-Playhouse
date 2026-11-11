
/* ==== FUN_004058d0 @ 004058d0 ==== 
 * signature: undefined __thiscall FUN_004058d0(void * this, int param_1, undefined4 * param_2)
 * body: 004058d0-0040593d
 */

void __thiscall FUN_004058d0(void *this,int param_1,undefined4 *param_2)

{
  if ((((*(char *)((int)this + 0xa8) == '\0') && (param_1 != 0)) &&
      ((*(uint *)(param_1 + 0x1e) & 2) != 0)) &&
     (((*(short *)(param_1 + 0x60) == 0 && ((*(uint *)(param_1 + 0x1e) & 0x40000000) == 0)) &&
      (*(short *)(param_1 + 0x22) != 0x43)))) {
    *(int *)((int)this + 0x124) = param_1;
    if (param_2 != (undefined4 *)0x0) {
      *(byte *)((int)this + 0xb5) = (byte)*param_2 & 1;
      *(byte *)((int)this + 0xb6) = (byte)*param_2 & 2;
      return;
    }
    *(undefined1 *)((int)this + 0xb6) = 1;
    *(undefined1 *)((int)this + 0xb5) = *(undefined1 *)((int)this + 0xa5);
  }
  return;
}


