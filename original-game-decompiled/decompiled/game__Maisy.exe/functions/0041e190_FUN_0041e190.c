
/* ==== FUN_0041e190 @ 0041e190 ==== 
 * signature: undefined __thiscall FUN_0041e190(void * this, int * param_1)
 * body: 0041e190-0041e1b5
 */

void __thiscall FUN_0041e190(void *this,int *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x114))();
  iVar1 = *(int *)((int)this + 0xbc);
  *param_1 = *(int *)((int)this + 0xb8);
  param_1[1] = iVar1;
  return;
}


