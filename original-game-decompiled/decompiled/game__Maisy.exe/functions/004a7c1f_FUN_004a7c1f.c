
/* ==== FUN_004a7c1f @ 004a7c1f ==== 
 * signature: undefined __fastcall FUN_004a7c1f(int * param_1)
 * body: 004a7c1f-004a7c4f
 */

void __fastcall FUN_004a7c1f(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  AfxLockGlobals(0xd);
  iVar1 = *param_1;
  puVar2 = (undefined4 *)(**(code **)(iVar1 + 0x28))();
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)();
  }
  AfxUnlockGlobals(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(iVar1 + 4))(1);
  }
  return;
}


