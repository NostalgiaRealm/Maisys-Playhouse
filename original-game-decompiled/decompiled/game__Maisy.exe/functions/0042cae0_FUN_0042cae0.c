
/* ==== FUN_0042cae0 @ 0042cae0 ==== 
 * signature: undefined __thiscall FUN_0042cae0(void * this, int * param_1)
 * body: 0042cae0-0042cbbf
 */

void __thiscall FUN_0042cae0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 local_58 [21];
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x1c8))();
  piVar2 = (int *)(**(code **)(*param_1 + 0x1c8))();
  if (piVar1 != (int *)0x0) {
    iVar3 = FUN_0040c620(piVar1);
    if (iVar3 != 0) {
      cVar6 = '\x01';
      pvVar4 = (void *)FUN_0040c620(piVar1);
      uVar5 = FUN_00403790(pvVar4,piVar1,cVar6);
      if ((char)uVar5 != '\0') {
        FUN_004142c0(local_58,0xca,0,this,0);
        (**(code **)(*(int *)this + 0x1e0))(local_58);
      }
    }
  }
  (**(code **)(**(int **)((int)this + 0x3a) + 0x1c))(1);
  FUN_0043de50(this,param_1,'\0',1);
  (**(code **)(**(int **)((int)this + 0x3a) + 0x1c))(1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_0040c620(piVar2);
    if (iVar3 != 0) {
      cVar6 = '\x01';
      pvVar4 = (void *)FUN_0040c620(piVar2);
      uVar5 = FUN_00403790(pvVar4,piVar2,cVar6);
      if ((char)uVar5 != '\0') {
        FUN_004142c0(local_58,0xc9,0,this,0);
        (**(code **)(*(int *)this + 0x1e0))(local_58);
      }
    }
  }
  return;
}


