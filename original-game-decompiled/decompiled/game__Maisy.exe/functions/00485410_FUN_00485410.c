
/* ==== FUN_00485410 @ 00485410 ==== 
 * signature: undefined4 __thiscall FUN_00485410(void * this, undefined2 * param_1, int * param_2, int param_3)
 * body: 00485410-0048547b
 */

undefined4 __thiscall FUN_00485410(void *this,undefined2 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  *param_2 = 0;
  uVar1 = FUN_00484f10(this,param_3);
  sVar2 = (short)CONCAT31(extraout_var,uVar1);
  if (sVar2 == 0) {
    uVar3 = FUN_004851c0(param_1,param_2);
    return uVar3;
  }
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return 0x10000;
    }
    uVar3 = FUN_00484f70(param_1,param_2);
    return uVar3;
  }
  uVar3 = FUN_00484f70(param_1,param_2);
  return uVar3;
}


