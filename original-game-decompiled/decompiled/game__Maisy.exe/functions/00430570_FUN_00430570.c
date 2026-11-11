
/* ==== FUN_00430570 @ 00430570 ==== 
 * signature: undefined4 __thiscall FUN_00430570(void * this, int param_1)
 * body: 00430570-0043058d
 */

undefined4 __thiscall FUN_00430570(void *this,int param_1)

{
  short sVar1;
  undefined2 extraout_var;
  
  sVar1 = FUN_00430860(this,param_1);
  return CONCAT31((int3)(CONCAT22(extraout_var,sVar1) >> 8),'\x01' - (sVar1 == -1));
}


