
/* ==== FUN_004a6d01 @ 004a6d01 ==== 
 * signature: undefined __thiscall FUN_004a6d01(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004a6d01-004a6d49
 */

void __thiscall FUN_004a6d01(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  iVar1 = FUN_004a7052();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a7052();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x78))();
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  PostMessageA((HWND)piVar2[7],0x36a,0,0);
  (**(code **)(*piVar2 + 0x70))(param_1,param_2);
  return;
}


