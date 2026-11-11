
/* ==== FUN_0045c710 @ 0045c710 ==== 
 * signature: undefined __thiscall FUN_0045c710(void * this, int param_1)
 * body: 0045c710-0045c73d
 */

void __thiscall FUN_0045c710(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0042ae10(this,param_1);
  *(int *)((int)this + 0x4c) = param_1;
  piVar1 = *(int **)((int)this + 0x36);
  uVar2 = FUN_0045a3e0(param_1);
  (**(code **)(*piVar1 + 0x160))(uVar2);
  return;
}


