
/* ==== FUN_004192b0 @ 004192b0 ==== 
 * signature: undefined __thiscall FUN_004192b0(void * this, int * param_1)
 * body: 004192b0-0041930e
 */

void __thiscall FUN_004192b0(void *this,int *param_1)

{
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)this + 0x398))(&local_c,1);
  if (*(void **)((int)this + 0x52) != (void *)0x0) {
    FUN_00421d50(*(void **)((int)this + 0x52),param_1,(short)*(undefined4 *)((int)this + 0x156));
    (**(code **)(**(int **)((int)this + 0x52) + 0x1e8))(param_1,&local_c,1);
    return;
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}


