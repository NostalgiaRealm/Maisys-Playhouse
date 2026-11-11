
/* ==== FUN_0042dd70 @ 0042dd70 ==== 
 * signature: uint __thiscall FUN_0042dd70(void * this, undefined4 param_1)
 * body: 0042dd70-0042dd90
 */

uint __thiscall FUN_0042dd70(void *this,undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 600))(0x19,param_1,0x1e);
  return -(uint)(cVar1 == '\0') & 0x10000;
}


