
/* ==== FUN_00469ce0 @ 00469ce0 ==== 
 * signature: undefined4 __thiscall FUN_00469ce0(void * this, char param_1)
 * body: 00469ce0-00469de1
 */

undefined4 __thiscall FUN_00469ce0(void *this,char param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  void *this_00;
  char cVar5;
  
  if (param_1 == '\0') {
    cVar2 = FUN_00469c30(this);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
      pvVar4 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      FUN_0044d7c0(pvVar4,(int)this,cVar2);
      return 0;
    }
  }
  cVar2 = (**(code **)(*(int *)this + 0x220))();
  cVar3 = (**(code **)(*(int *)this + 0x21c))();
  uVar1 = DAT_004db99c;
  DAT_004db99c = this;
  (**(code **)(*(int *)this + 8))(0,0);
  if (*(int **)((int)this + 0x52) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x52) + 0x80))(0x7fffffff,0x4b);
    (**(code **)(**(int **)((int)this + 0x52) + 0x1c8))(this,0);
    *(undefined4 *)((int)this + 0x52) = 0;
    if (*(int **)((int)this + 0x5a) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x5a) + 0x208))(0);
    }
  }
  cVar5 = '\x01';
  pvVar4 = this;
  this_00 = (void *)FUN_00466a70(*(int *)((int)this + 4));
  FUN_0044d7c0(this_00,(int)pvVar4,cVar5);
  if (cVar2 != '\0') {
    *(uint *)((int)this + 0x7e) = *(uint *)((int)this + 0x7e) | 0x10000000;
  }
  if (cVar3 != '\0') {
    *(uint *)((int)this + 0x7e) = *(uint *)((int)this + 0x7e) | 0x20000000;
  }
  if ((cVar2 != '\0') || (cVar3 != '\0')) {
    *(uint *)((int)this + 0x7e) = *(uint *)((int)this + 0x7e) | 0x80000000;
  }
  DAT_004db99c = (void *)uVar1;
  (**(code **)(*(int *)this + 200))(0);
  *(undefined4 *)((int)this + 0x7a) = 0;
  return 0;
}


