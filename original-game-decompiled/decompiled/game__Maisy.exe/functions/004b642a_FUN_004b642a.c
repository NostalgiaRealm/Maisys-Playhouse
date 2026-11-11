
/* ==== FUN_004b642a @ 004b642a ==== 
 * signature: int __thiscall FUN_004b642a(void * this, uint param_1, uint param_2, long param_3, long * param_4)
 * body: 004b642a-004b645a
 */

int __thiscall FUN_004b642a(void *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
  if (param_1 == 0x2b) {
    (**(code **)(*(int *)this + 0xbc))(param_3);
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004aad59(this,param_1,param_2,param_3,param_4);
  }
  return iVar1;
}


