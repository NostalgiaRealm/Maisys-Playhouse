
/* ==== FUN_00460c20 @ 00460c20 ==== 
 * signature: undefined __thiscall FUN_00460c20(void * this, int * param_1)
 * body: 00460c20-00460c7a
 */

void __thiscall FUN_00460c20(void *this,int *param_1)

{
  int iVar1;
  undefined1 local_c [8];
  
  if ((param_1 != (int *)0x0) && ((*(byte *)((int)param_1 + 0x1e) & 4) != 0)) {
    (**(code **)(*param_1 + 0x398))(local_c,0);
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x39c))(local_c);
    (**(code **)(*param_1 + 0x3a0))(local_c,0);
    (**(code **)(iVar1 + 0x3a4))(local_c);
  }
  return;
}


