
/* ==== FUN_004093a0 @ 004093a0 ==== 
 * signature: undefined __thiscall FUN_004093a0(void * this, undefined4 param_1, undefined2 param_2, undefined2 param_3)
 * body: 004093a0-00409405
 */

void __thiscall FUN_004093a0(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = (int *)((int)this + 0x134);
  piVar2 = (int *)*piVar1;
  FUN_0045a200(*(int *)((int)this + 0x2a));
  cVar3 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if ((cVar3 == '\0') && (piVar2 != (int *)0x0)) {
    FUN_004106a0(*(int *)((int)this + 0x8e));
    (**(code **)(*piVar2 + 0x450))
              (param_1,CONCAT22(extraout_var_00,param_2),CONCAT22(extraout_var,param_3),0);
    FUN_00414520((int)piVar1);
    *piVar1 = 0;
  }
  return;
}


