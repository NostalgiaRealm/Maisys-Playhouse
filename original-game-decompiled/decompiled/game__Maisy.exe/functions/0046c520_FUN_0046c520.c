
/* ==== FUN_0046c520 @ 0046c520 ==== 
 * signature: undefined __thiscall FUN_0046c520(void * this, int * param_1)
 * body: 0046c520-0046c541
 */

void __thiscall FUN_0046c520(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x5a);
  uVar2 = (**(code **)(*param_1 + 0x31c))();
  (**(code **)(*piVar1 + 0xe4))(uVar2);
  return;
}


