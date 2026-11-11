
/* ==== FUN_00424920 @ 00424920 ==== 
 * signature: undefined4 __thiscall FUN_00424920(void * this, short param_1, undefined4 param_2, undefined4 param_3)
 * body: 00424920-00424964
 */

undefined4 __thiscall FUN_00424920(void *this,short param_1,undefined4 param_2,undefined4 param_3)

{
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar1;
  
  FUN_0042d3f0(this,param_1,param_2,param_3);
  uVar1 = extraout_var;
  if ((((*(byte *)((int)this + 100) & 1) == 0) || ((*(byte *)((int)this + 100) & 2) != 0)) &&
     (*(int **)((int)this + 0x50) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x50) + 0x25c))(param_1,param_2,param_3,this);
    uVar1 = extraout_var_00;
  }
  return CONCAT31(uVar1,1);
}


