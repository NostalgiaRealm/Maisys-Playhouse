
/* ==== FUN_0041ecf0 @ 0041ecf0 ==== 
 * signature: undefined __thiscall FUN_0041ecf0(void * this, int * param_1)
 * body: 0041ecf0-0041ed43
 */

void __thiscall FUN_0041ecf0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = (**(code **)(*param_1 + 0x128))(1);
  (**(code **)(iVar1 + 0x124))(uVar2);
  if (*(int *)((int)this + 4) == param_1[1]) {
    uVar2 = FUN_0041ed90((int)param_1);
    (**(code **)(iVar1 + 500))(uVar2);
  }
  uVar2 = (**(code **)(*param_1 + 0x200))();
  (**(code **)(iVar1 + 0x1fc))(uVar2);
  return;
}


