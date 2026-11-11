
/* ==== FUN_00409300 @ 00409300 ==== 
 * signature: undefined __thiscall FUN_00409300(void * this, int param_1, undefined2 param_2, undefined2 param_3)
 * body: 00409300-00409394
 */

void __thiscall FUN_00409300(void *this,int param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int *this_00;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  FUN_0045a200(*(int *)((int)this + 0x2a));
  cVar1 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (cVar1 == '\0') {
    this_00 = (int *)FUN_004064d0(this,param_1,8,'\0');
    if (this_00 != (int *)0x0) {
      FUN_004106a0(*(int *)((int)this + 0x8e));
      FUN_00414520((int)this + 0x134);
      *(int **)((int)this + 0x134) = this_00;
      *(undefined4 *)((int)this + 0x138) = 0;
      *(undefined4 *)((int)this + 0x13c) = 0;
      *(undefined4 *)((int)this + 0x140) = 0;
      FUN_00414500(this_00,(int)this + 0x134);
      (**(code **)(*this_00 + 0x44c))
                (param_1,CONCAT22(extraout_var_00,param_2),CONCAT22(extraout_var,param_3),0);
    }
  }
  return;
}


