
/* ==== FUN_00431810 @ 00431810 ==== 
 * signature: undefined __thiscall FUN_00431810(void * this, int param_1, undefined2 param_2)
 * body: 00431810-00431846
 */

void __thiscall FUN_00431810(void *this,int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    (**(code **)(*(int *)this + 0x180))();
    uVar1 = FUN_00414e90((int)this);
    FUN_00409300(*(void **)((int)this + 0x90),param_1,param_2,(short)uVar1);
  }
  return;
}


