
/* ==== FUN_004a6a45 @ 004a6a45 ==== 
 * signature: undefined __thiscall FUN_004a6a45(void * this, void * param_1)
 * body: 004a6a45-004a6a66
 */

void __thiscall FUN_004a6a45(void *this,void *param_1)

{
  CGdiObject *pCVar1;
  
  pCVar1 = CGdiObject::FromHandle(param_1);
  (**(code **)(*(int *)this + 0xc4))(pCVar1);
  FUN_004a8882(this);
  return;
}


