
/* ==== FUN_00485db0 @ 00485db0 ==== 
 * signature: undefined4 __thiscall FUN_00485db0(void * this, char * param_1)
 * body: 00485db0-00485e43
 */

undefined4 __thiscall FUN_00485db0(void *this,char *param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 0;
  iVar3 = FUN_00485410(this,(undefined2 *)param_1,&local_8,1);
  if (iVar3 != 0) {
    return 0x60001;
  }
  uVar1 = FUN_00484f10(this,1);
  sVar2 = (short)CONCAT31(extraout_var,uVar1);
  if (sVar2 == 0) {
    uVar4 = FUN_00485b30(this,param_1,&local_8);
    return uVar4;
  }
  if (sVar2 == 1) {
    uVar4 = FUN_00485480(this,(undefined2 *)param_1,&local_8);
    return uVar4;
  }
  if (sVar2 != 2) {
    return 0x10000;
  }
  uVar4 = FUN_00485480(this,(undefined2 *)param_1,&local_8);
  return uVar4;
}


