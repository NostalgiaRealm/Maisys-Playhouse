
/* ==== FUN_00469fe0 @ 00469fe0 ==== 
 * signature: undefined __thiscall FUN_00469fe0(void * this, int * param_1)
 * body: 00469fe0-0046a0f8
 */

void __thiscall FUN_00469fe0(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *this_00;
  undefined4 uVar5;
  char cVar6;
  undefined4 local_58 [21];
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x1c8))();
  if (piVar2 != (int *)0x0) {
    bVar1 = true;
    piVar3 = (int *)FUN_0046ca10((int)param_1);
    if (piVar3 == piVar2) goto LAB_0046a009;
  }
  bVar1 = false;
LAB_0046a009:
  if ((!bVar1) && (piVar2 != (int *)0x0)) {
    iVar4 = FUN_0040c620(piVar2);
    if (iVar4 != 0) {
      cVar6 = '\x01';
      this_00 = (void *)FUN_0040c620(piVar2);
      uVar5 = FUN_00403790(this_00,piVar2,cVar6);
      if ((char)uVar5 != '\0') {
        FUN_0046ba40(this,1,0);
      }
    }
  }
  (**(code **)(**(int **)((int)this + 0x62) + 0x1c))(1);
  FUN_0043d880(this,param_1,'\0',0,(short *)0x0,'\0');
  (**(code **)(**(int **)((int)this + 0x62) + 0x1c))(1);
  (**(code **)(*(int *)this + 0x280))(param_1);
  iVar4 = (**(code **)(*param_1 + 0x10))();
  (**(code **)(*(int *)this + 0x268))(*(undefined4 *)(iVar4 + 0x82));
  if (!bVar1) {
    cVar6 = '\x01';
    piVar2 = (int *)FUN_0046ca10((int)this);
    uVar5 = FUN_00403790(*(void **)((int)this + 0x3a),piVar2,cVar6);
    if ((char)uVar5 != '\0') {
      (**(code **)(*(int *)this + 0x230))();
      FUN_004142c0(local_58,0x7d1,0,this,0);
      FUN_0046b730(this,(int)local_58);
      FUN_004142c0(local_58,0xc9,0,this,0);
      FUN_0046b730(this,(int)local_58);
    }
  }
  return;
}


