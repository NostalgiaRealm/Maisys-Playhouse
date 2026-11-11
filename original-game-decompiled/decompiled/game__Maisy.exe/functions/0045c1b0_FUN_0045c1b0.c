
/* ==== FUN_0045c1b0 @ 0045c1b0 ==== 
 * signature: undefined __thiscall FUN_0045c1b0(void * this, int * param_1)
 * body: 0045c1b0-0045c249
 */

void __thiscall FUN_0045c1b0(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  
  FUN_0045c0d0(this,(int)param_1);
  if ((*(byte *)((int)param_1 + 0x1e) & 2) != 0) {
    *(short *)((int)this + 0x16) = *(short *)((int)this + 0x16) + 1;
  }
  if ((*(uint *)((int)param_1 + 0x1e) & 4) == 0) {
    if ((*(uint *)((int)param_1 + 0x1e) & 8) != 0) {
      pvVar2 = FUN_0046da90(param_1,'\x01','\x01');
      if (pvVar2 != (void *)0x0) {
        *(short *)((int)this + 0x14) = *(short *)((int)this + 0x14) + 1;
      }
    }
  }
  else {
    *(short *)((int)this + 0x18) = *(short *)((int)this + 0x18) + 1;
    if ((*(byte *)((int)param_1 + 0x1f) & 0x80) == 0) {
      pvVar2 = FUN_0046da90(param_1,'\x01','\x01');
      if (pvVar2 != (void *)0x0) {
        *(short *)((int)this + 0x14) = *(short *)((int)this + 0x14) + 1;
      }
    }
    if (*(short *)((int)this + 0x14) != 0) {
      cVar1 = (**(code **)(*param_1 + 0x3b0))();
      if (cVar1 == '\0') {
        *(short *)((int)this + 0x20) = *(short *)((int)this + 0x20) + 1;
      }
    }
    if ((*(byte *)((int)param_1 + 0x29) & 0x20) != 0) {
      *(short *)((int)this + 0x1e) = *(short *)((int)this + 0x1e) + 1;
    }
  }
  if ((*(byte *)((int)param_1 + 0x1e) & 0x10) != 0) {
    if (*(int *)((int)param_1 + 0x2a) != 0) {
      *(short *)((int)this + 0x1c) = *(short *)((int)this + 0x1c) + 1;
      return;
    }
    *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) + 1;
  }
  return;
}


