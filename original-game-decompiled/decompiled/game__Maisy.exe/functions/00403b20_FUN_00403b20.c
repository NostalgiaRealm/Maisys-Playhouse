
/* ==== FUN_00403b20 @ 00403b20 ==== 
 * signature: undefined __thiscall FUN_00403b20(void * this, short param_1, undefined4 param_2, undefined4 param_3, undefined2 param_4, undefined4 param_5, undefined4 param_6)
 * body: 00403b20-00403b77
 */

void __thiscall
FUN_00403b20(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6)

{
  if ((param_1 != 6) && (param_1 != 7)) {
    FUN_00413860(this,param_1,param_2,(short)param_3,param_4,param_5);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x8a) + 100))(param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  return;
}


