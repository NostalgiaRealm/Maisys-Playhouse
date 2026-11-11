
/* ==== FUN_0041ce30 @ 0041ce30 ==== 
 * signature: undefined __thiscall FUN_0041ce30(void * this, undefined2 param_1)
 * body: 0041ce30-0041ce7e
 */

void __thiscall FUN_0041ce30(void *this,undefined2 param_1)

{
  undefined2 extraout_var;
  
  if ((*(byte *)((int)this + 0x10) & 0x10) == 0) {
    FUN_0041cca0(this,DAT_004da388);
    FUN_0041d1e0(this);
    *(undefined2 *)((int)this + 0x24) = param_1;
    (**(code **)(*(int *)this + 0xc4))(0,CONCAT22(extraout_var,param_1));
  }
  else {
    (**(code **)(**(int **)((int)this + 0x4e) + 0xf0))(this);
  }
  *(byte *)((int)this + 0x15e) = *(byte *)((int)this + 0x15e) | 2;
  return;
}


