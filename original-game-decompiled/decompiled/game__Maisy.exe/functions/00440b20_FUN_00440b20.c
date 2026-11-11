
/* ==== FUN_00440b20 @ 00440b20 ==== 
 * signature: undefined __thiscall FUN_00440b20(void * this, int param_1)
 * body: 00440b20-00440d22
 */

void __thiscall FUN_00440b20(void *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  char cVar5;
  short local_14 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)((int)this + 0x3a);
  iVar4 = 0;
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x1f) & 0x40) != 0)) {
    iVar4 = iVar3;
  }
  iVar3 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1f) & 0x40) != 0)) {
    iVar3 = param_1;
  }
  if (iVar3 == iVar4) {
    if (*(int *)((int)this + 0x7e) != 0) {
      FUN_004401e0(this,2,'\0');
      pcVar1 = *(code **)(*(int *)this + 0x244);
      iVar3 = (*pcVar1)();
      if ((iVar3 == 0) ||
         ((iVar3 = (*pcVar1)(), *(int *)(iVar3 + 0x156) != 0x6e705453 &&
          (iVar3 = (*pcVar1)(), *(int *)(iVar3 + 0x156) != 0x616e7473)))) {
        FUN_00441690(this,0,0);
        FUN_00440010(this);
      }
    }
    FUN_0042b360(this,param_1);
  }
  else if (((iVar4 == 0) || (iVar3 == 0)) || (*(int *)(iVar3 + 0x156) == *(int *)(iVar4 + 0x156))) {
    local_c = 0;
    local_8 = 0xfffffc18;
    if (*(int *)((int)this + 0x7e) != 0) {
      iVar3 = FUN_0043fd60((int)this);
      if (iVar3 != 0) {
        FUN_0043fd60((int)this);
        FUN_0048d4ec();
      }
      FUN_004400e0(this);
      FUN_0043fdb0(this,0);
    }
    if (((*(int *)((int)this + 0x3a) != 0) && (iVar3 = FUN_0043fd60((int)this), iVar3 != 0)) &&
       (iVar3 = FUN_0043fd70(this,'\x01'), iVar3 != 0)) {
      iVar3 = FUN_0048ced3();
      cVar5 = (char)local_14;
      (**(code **)(*(int *)this + 0x298))();
      if (iVar3 == 0) {
        FUN_004400a0(this);
      }
      if (*(int *)((int)this + 0xc4) == 0) {
        iVar4 = FUN_0041ed90((int)this);
        FUN_00408550(iVar4);
      }
      FUN_0043fd60((int)this);
      FUN_0048d4ec();
      FUN_00441c20(this,local_14);
      cVar2 = FUN_004413d0((int)this);
      if (cVar2 != '\0') {
        FUN_004413b0();
        FUN_0048d0db();
      }
      FUN_004401e0(this,2,'\0');
      this_00 = (void *)(**(code **)(*(int *)this + 0x210))(0);
      FUN_0044f650(this_00,cVar5);
      FUN_00441690(this,0,0);
      FUN_00440010(this);
      if (iVar3 == 0) {
        FUN_004400e0(this);
      }
    }
    FUN_0042b360(this,param_1);
    return;
  }
  return;
}


