
/* ==== FUN_00417410 @ 00417410 ==== 
 * signature: undefined __cdecl FUN_00417410(int param_1)
 * body: 00417410-00417454
 */

void __cdecl FUN_00417410(int param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  (**(code **)(**(int **)(param_1 + 8) + 4))();
  *(undefined4 *)(param_1 + 8) = 0;
  LocalLock(*(HLOCAL *)(iVar1 + 0x10));
  sVar2 = 0;
  if (0 < *(int *)(iVar1 + 6)) {
    do {
      sVar2 = sVar2 + 1;
    } while ((int)sVar2 < *(int *)(iVar1 + 6));
  }
  LocalUnlock(*(HLOCAL *)(iVar1 + 0x10));
  return;
}


