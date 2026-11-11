
/* ==== FUN_00415250 @ 00415250 ==== 
 * signature: undefined __thiscall FUN_00415250(void * this, int param_1, short param_2)
 * body: 00415250-00415280
 */

void __thiscall FUN_00415250(void *this,int param_1,short param_2)

{
  int iVar1;
  
  if (param_2 == 8) {
    iVar1 = (**(code **)(*(int *)this + 0x10))();
    iVar1 = FUN_00458a00(iVar1);
    if (iVar1 == param_1) {
      (**(code **)(**(int **)((int)this + 0x2a) + 0x110))();
    }
  }
  return;
}


