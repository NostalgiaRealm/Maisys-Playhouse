
/* ==== FUN_0044e160 @ 0044e160 ==== 
 * signature: undefined __thiscall FUN_0044e160(void * this, int * param_1)
 * body: 0044e160-0044e19b
 */

void __thiscall FUN_0044e160(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00430570(*(void **)((int)this + 0x60),(int)param_1);
  if ((char)uVar1 != '\0') {
    if (*(int **)((int)this + 100) == param_1) {
      (**(code **)(**(int **)((int)this + 100) + 0xdc))();
      *(undefined4 *)((int)this + 100) = 0;
    }
    FUN_00430790(*(void **)((int)this + 0x60),(int)param_1);
  }
  return;
}


