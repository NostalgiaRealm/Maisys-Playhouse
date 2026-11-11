
/* ==== FUN_0041e1c0 @ 0041e1c0 ==== 
 * signature: undefined __thiscall FUN_0041e1c0(void * this, int * param_1)
 * body: 0041e1c0-0041e1ea
 */

void __thiscall FUN_0041e1c0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *(int *)((int)this + 0xb8) = *param_1;
  *(int *)((int)this + 0xbc) = iVar1;
  (**(code **)(*(int *)this + 0x80))(0x7fffffff,10);
  return;
}


