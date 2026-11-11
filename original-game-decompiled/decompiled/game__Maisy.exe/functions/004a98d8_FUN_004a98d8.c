
/* ==== FUN_004a98d8 @ 004a98d8 ==== 
 * signature: undefined __thiscall FUN_004a98d8(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004a98d8-004a9916
 */

void __thiscall FUN_004a98d8(void *this,undefined4 param_1,undefined4 param_2)

{
  _AFX_THREAD_STATE *p_Var1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = param_1;
  local_10 = param_2;
  p_Var1 = FUN_004a8846();
  local_8 = *(int *)(p_Var1 + 4) + -0x132;
  (**(code **)(*(int *)this + 0x9c))(0x19,0,&local_10);
  return;
}


