
/* ==== FUN_00421910 @ 00421910 ==== 
 * signature: undefined __thiscall FUN_00421910(void * this, int param_1)
 * body: 00421910-00421953
 */

void __thiscall FUN_00421910(void *this,int param_1)

{
  int iVar1;
  
  FUN_00426900(param_1);
  iVar1 = *(int *)((int)this + 0x1e2) + -1;
  *(int *)((int)this + 0x1e2) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x1e2) = 0;
  }
  if (*(int *)((int)this + 0x1e2) == 0) {
    (**(code **)(*(int *)this + 0x19c))();
  }
  return;
}


