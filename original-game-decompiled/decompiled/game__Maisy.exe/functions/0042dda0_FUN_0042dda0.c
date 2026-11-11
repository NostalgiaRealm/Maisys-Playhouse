
/* ==== FUN_0042dda0 @ 0042dda0 ==== 
 * signature: uint __thiscall FUN_0042dda0(void * this, undefined4 param_1)
 * body: 0042dda0-0042ddc0
 */

uint __thiscall FUN_0042dda0(void *this,undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 600))(0x1f,param_1,0x1e);
  return -(uint)(cVar1 == '\0') & 0x10000;
}


