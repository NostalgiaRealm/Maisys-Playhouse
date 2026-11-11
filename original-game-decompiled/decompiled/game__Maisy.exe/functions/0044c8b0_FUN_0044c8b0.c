
/* ==== FUN_0044c8b0 @ 0044c8b0 ==== 
 * signature: undefined __thiscall FUN_0044c8b0(void * this, int param_1)
 * body: 0044c8b0-0044c949
 */

void __thiscall FUN_0044c8b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [8];
  
  if (*(int *)((int)this + 0x3a) != param_1) {
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x1f8))();
    if (*(int *)((int)this + 0x7e) != 0) {
      FUN_0044bc80();
      FUN_0044bad0(this);
    }
    if (*(int *)((int)this + 0x3a) != 0) {
      iVar2 = FUN_0044bb00(this,'\x01');
      if (iVar2 != 0) {
        (**(code **)(iVar1 + 0x298))(local_c);
        FUN_0044c950();
      }
    }
    FUN_0042b360(this,param_1);
    return;
  }
  if (*(int *)((int)this + 0x7e) != 0) {
    FUN_0044bcb0(this,2,'\0');
    FUN_0044c790(this,0,0);
    FUN_0044bc00(this);
  }
  FUN_0042b360(this,param_1);
  return;
}


