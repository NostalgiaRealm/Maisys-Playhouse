
/* ==== FUN_0042e0b0 @ 0042e0b0 ==== 
 * signature: undefined __thiscall FUN_0042e0b0(void * this, int * param_1)
 * body: 0042e0b0-0042e0d9
 */

void __thiscall FUN_0042e0b0(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *this_00;
  
  pcVar1 = *(code **)(*(int *)this + 0x10);
  iVar2 = (*pcVar1)();
  FUN_0045a510(iVar2);
  this_00 = (void *)(*pcVar1)();
  FUN_0045ab50(this_00,param_1);
  return;
}


