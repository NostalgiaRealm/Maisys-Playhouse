
/* ==== FUN_00422180 @ 00422180 ==== 
 * signature: undefined __thiscall FUN_00422180(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00422180-004221d2
 */

void __thiscall FUN_00422180(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = FUN_00486c30(param_1);
  uVar2 = (**(code **)(*param_1 + 0x110))(uVar2,param_2,param_3);
  (**(code **)(iVar1 + 0x138))(uVar2);
  (**(code **)(iVar1 + 0x160))(0,0);
  *(undefined4 *)((int)this + 0x52) = 0;
  (**(code **)(iVar1 + 0x114))();
  return;
}


