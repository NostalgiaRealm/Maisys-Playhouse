
/* ==== FUN_004491d0 @ 004491d0 ==== 
 * signature: undefined __thiscall FUN_004491d0(void * this, undefined2 param_1)
 * body: 004491d0-0044920a
 */

void __thiscall FUN_004491d0(void *this,undefined2 param_1)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar1;
  
  FUN_00449260(this);
  uVar1 = extraout_var;
  if (*(char *)((int)this + 0x17d) != '\0') {
    FUN_004495f0(this,DAT_004da388);
    uVar1 = extraout_var_00;
  }
  *(undefined2 *)((int)this + 0x24) = param_1;
  (**(code **)(*(int *)this + 0xc4))(0,CONCAT22(uVar1,param_1));
  return;
}


