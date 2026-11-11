
/* ==== FUN_00430590 @ 00430590 ==== 
 * signature: undefined __fastcall FUN_00430590(int param_1)
 * body: 00430590-00430638
 */

void __fastcall FUN_00430590(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = 0;
  if ((*(short *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != 0)) {
    local_8 = 0;
    while( true ) {
      if (*(short *)(param_1 + 0xc) <= local_8) break;
      pvVar3 = LocalLock(*(HLOCAL *)(param_1 + 8));
      iVar1 = *(int *)(iVar4 + (int)pvVar3);
      LocalUnlock(*(HLOCAL *)(param_1 + 8));
      if (iVar1 != 0) {
        pvVar3 = LocalLock(*(HLOCAL *)(param_1 + 8));
        puVar2 = *(undefined4 **)(iVar4 + (int)pvVar3);
        LocalUnlock(*(HLOCAL *)(param_1 + 8));
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        pvVar3 = LocalLock(*(HLOCAL *)(param_1 + 8));
        *(undefined4 *)((int)pvVar3 + iVar4) = 0;
        LocalUnlock(*(HLOCAL *)(param_1 + 8));
      }
      iVar4 = iVar4 + 4;
      local_8 = local_8 + 1;
    }
    FUN_0043f720(*(HLOCAL *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  return;
}


