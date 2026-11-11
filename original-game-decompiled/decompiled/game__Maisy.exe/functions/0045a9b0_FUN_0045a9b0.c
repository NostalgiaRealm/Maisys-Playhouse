
/* ==== FUN_0045a9b0 @ 0045a9b0 ==== 
 * signature: undefined __thiscall FUN_0045a9b0(void * this, short param_1, undefined4 param_2, undefined2 param_3, undefined2 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0045a9b0-0045aa0c
 */

void __thiscall
FUN_0045a9b0(void *this,short param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6)

{
  if ((param_1 == 1000) && (*(int **)((int)this + 0x82) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x82) + 100))(1000,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  FUN_00413860(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


