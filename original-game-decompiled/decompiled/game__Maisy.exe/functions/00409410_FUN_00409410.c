
/* ==== FUN_00409410 @ 00409410 ==== 
 * signature: undefined __thiscall FUN_00409410(void * this, undefined4 param_1, undefined2 param_2, undefined2 param_3)
 * body: 00409410-0040946b
 */

void __thiscall FUN_00409410(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = *(int **)((int)this + 0x134);
  FUN_0045a200(*(int *)((int)this + 0x2a));
  cVar2 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (((cVar2 == '\0') && (DAT_004dcf98 != '\0')) && (piVar1 != (int *)0x0)) {
    FUN_004106a0(*(int *)((int)this + 0x8e));
    (**(code **)(*piVar1 + 0x454))
              (param_1,CONCAT22(extraout_var_00,param_2),CONCAT22(extraout_var,param_3),0);
  }
  return;
}


