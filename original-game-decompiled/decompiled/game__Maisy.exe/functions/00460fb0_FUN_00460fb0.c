
/* ==== FUN_00460fb0 @ 00460fb0 ==== 
 * signature: undefined __thiscall FUN_00460fb0(void * this, undefined4 param_1)
 * body: 00460fb0-00461042
 */

void __thiscall FUN_00460fb0(void *this,undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = *(int *)this;
  pcVar1 = *(code **)(iVar3 + 0x3e0);
  (*pcVar1)(1);
  *(short *)((int)this + 0xa2) = *(short *)((int)this + 0xa2) + (short)param_1;
  *(short *)((int)this + 0xa6) = *(short *)((int)this + 0xa6) + (short)param_1;
  *(short *)((int)this + 0xa4) = *(short *)((int)this + 0xa4) + param_1._2_2_;
  *(short *)((int)this + 0xa8) = *(short *)((int)this + 0xa8) + param_1._2_2_;
  *(short *)((int)this + 0xaa) = *(short *)((int)this + 0xaa) + (short)param_1;
  *(short *)((int)this + 0xae) = *(short *)((int)this + 0xae) + (short)param_1;
  *(short *)((int)this + 0xac) = *(short *)((int)this + 0xac) + param_1._2_2_;
  *(short *)((int)this + 0xb0) = *(short *)((int)this + 0xb0) + param_1._2_2_;
  (**(code **)(iVar3 + 0x3fc))();
  (*pcVar1)(1);
  cVar2 = (**(code **)(iVar3 + 0x130))();
  if (cVar2 != '\0') {
    iVar3 = FUN_0040c620(this);
    if (*(char *)(iVar3 + 0xaa) == '\0') {
      pvVar4 = (void *)FUN_0040c620(this);
      FUN_00407970(pvVar4);
    }
  }
  return;
}


