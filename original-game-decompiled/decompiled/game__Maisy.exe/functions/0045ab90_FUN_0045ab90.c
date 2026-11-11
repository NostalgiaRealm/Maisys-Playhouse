
/* ==== FUN_0045ab90 @ 0045ab90 ==== 
 * signature: undefined __thiscall FUN_0045ab90(void * this, undefined2 param_1, int param_2, char param_3)
 * body: 0045ab90-0045abef
 */

void __thiscall FUN_0045ab90(void *this,undefined2 param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_var;
  
  piVar2 = FUN_0041bd90(0xc1c,0xffffffff,0);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x38))(this);
  (**(code **)(iVar1 + 0x270))(CONCAT22(extraout_var,param_1));
  if (param_2 != 0) {
    (**(code **)(iVar1 + 0x74))(param_2);
  }
  FUN_004306b0(*(void **)((int)this + 0x7e),piVar2);
  if ((piVar2 != (int *)0x0) && (param_3 != '\0')) {
    FUN_004584e0(piVar2);
  }
  return;
}


