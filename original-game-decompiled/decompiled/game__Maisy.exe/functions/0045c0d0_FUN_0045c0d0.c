
/* ==== FUN_0045c0d0 @ 0045c0d0 ==== 
 * signature: undefined __thiscall FUN_0045c0d0(void * this, int param_1)
 * body: 0045c0d0-0045c157
 */

void __thiscall FUN_0045c0d0(void *this,int param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1e);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 0x400) != 0) {
      if ((uVar2 & 0x40) != 0) {
        *(short *)((int)this + 0xe) = *(short *)((int)this + 0xe) + 1;
      }
      if ((*(byte *)(param_1 + 0x20) & 8) != 0) {
        *(short *)((int)this + 0x10) = *(short *)((int)this + 0x10) + 1;
      }
      *(short *)((int)this + 0x12) = *(short *)((int)this + 0x12) + 1;
    }
    return;
  }
  sVar1 = *(short *)(param_1 + 0x22);
  if (sVar1 == 0x43) {
    *(short *)((int)this + 4) = *(short *)((int)this + 4) + 1;
    return;
  }
  if (sVar1 == 0x40) {
    *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
    return;
  }
  if (((*(short *)(param_1 + 0x60) == 0) && ((uVar2 & 0x40000000) == 0)) && (sVar1 != 0x43)) {
    *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
    return;
  }
  if (sVar1 == 0x3f) {
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + 1;
    return;
  }
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  return;
}


