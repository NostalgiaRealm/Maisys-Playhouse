
/* ==== FUN_00421130 @ 00421130 ==== 
 * signature: undefined __thiscall FUN_00421130(void * this, short param_1)
 * body: 00421130-004211a8
 */

void __thiscall FUN_00421130(void *this,short param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  
  if ((*(byte *)((int)this + 0x10) & 0x10) != 0) {
    (**(code **)(**(int **)((int)this + 0x4e) + 0xf0))(this);
    return;
  }
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x114))();
  cVar1 = (**(code **)(iVar2 + 0xec))();
  if ((cVar1 != '\0') && (*(int *)((int)this + 0x152) != 0)) {
    (**(code **)(iVar2 + 0xc4))(0,param_1);
    sVar3 = 0;
    if (0 < *(short *)((int)this + 0x176)) {
      do {
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        FUN_00420e80(this,iVar2,param_1);
      } while (sVar3 < *(short *)((int)this + 0x176));
    }
  }
  return;
}


