
/* ==== FUN_00412570 @ 00412570 ==== 
 * signature: undefined __thiscall FUN_00412570(void * this, int * param_1)
 * body: 00412570-004125cf
 */

void __thiscall FUN_00412570(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)((int)this + 0x3e);
  *(int **)((int)this + 0x3e) = param_1;
  iVar1 = *param_1;
  uVar2 = (**(code **)(*(int *)this + 0x218))();
  (**(code **)(iVar1 + 0x214))(uVar2);
  if (*(int *)((int)this + 0x3a) != 0) {
    (**(code **)(iVar1 + 0x38))(*(undefined4 *)(*(int *)((int)this + 0x3a) + 4));
    (**(code **)(iVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x3a));
  }
  if ((*(byte *)((int)param_1 + 0x29) & 0x80) != 0) {
    (**(code **)(iVar1 + 0xfc))();
  }
  (**(code **)(iVar1 + 0x230))();
  return;
}


