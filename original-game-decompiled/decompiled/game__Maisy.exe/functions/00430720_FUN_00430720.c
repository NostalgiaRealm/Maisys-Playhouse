
/* ==== FUN_00430720 @ 00430720 ==== 
 * signature: undefined __thiscall FUN_00430720(void * this, undefined * param_1)
 * body: 00430720-00430786
 */

void __thiscall FUN_00430720(void *this,undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(short *)((int)this + 0xc)) {
    do {
      pvVar3 = LocalLock(*(HLOCAL *)((int)this + 8));
      iVar1 = *(int *)(iVar4 + (int)pvVar3);
      LocalUnlock(*(HLOCAL *)((int)this + 8));
      if (iVar1 != 0) {
        pvVar3 = LocalLock(*(HLOCAL *)((int)this + 8));
        uVar2 = *(undefined4 *)(iVar4 + (int)pvVar3);
        LocalUnlock(*(HLOCAL *)((int)this + 8));
        (*(code *)param_1)(uVar2);
      }
      iVar4 = iVar4 + 4;
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)((int)this + 0xc));
  }
  return;
}


