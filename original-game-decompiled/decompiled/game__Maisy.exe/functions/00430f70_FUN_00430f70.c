
/* ==== FUN_00430f70 @ 00430f70 ==== 
 * signature: undefined __thiscall FUN_00430f70(void * this, int param_1)
 * body: 00430f70-0043102c
 */

void __thiscall FUN_00430f70(void *this,int param_1)

{
  short sVar1;
  
  (**(code **)(*(int *)this + 0x114))();
  if (param_1 < 1) {
    *(undefined4 *)((int)this + 0xce) = 0;
    *(undefined4 *)((int)this + 0xd2) = *(undefined4 *)((int)this + 0xbc);
  }
  else {
    sVar1 = 0;
    if (0 < *(short *)((int)this + 0xde)) {
      do {
        if (*(int *)(*(int *)((int)this + 0xd6) + 10 + sVar1 * 0xe) == param_1) {
          *(undefined2 *)((int)this + 0xcc) = 0xffff;
          *(uint *)((int)this + 0xce) =
               *(int *)(*(int *)((int)this + 0xd6) + 6 + sVar1 * 0xe) *
               (uint)*(byte *)((int)this + 0xf6) *
               ((int)(*(int *)((int)this + 0xe2) + (*(int *)((int)this + 0xe2) >> 0x1f & 7U)) >> 3);
          *(undefined4 *)((int)this + 0xd2) = *(undefined4 *)((int)this + 0xbc);
          return;
        }
        sVar1 = sVar1 + 1;
      } while (sVar1 < *(short *)((int)this + 0xde));
      return;
    }
  }
  return;
}


