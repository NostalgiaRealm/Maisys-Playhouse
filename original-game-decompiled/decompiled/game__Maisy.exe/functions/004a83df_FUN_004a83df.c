
/* ==== FUN_004a83df @ 004a83df ==== 
 * signature: undefined __thiscall FUN_004a83df(void * this, int param_1)
 * body: 004a83df-004a843a
 */

void __thiscall FUN_004a83df(void *this,int param_1)

{
  int iVar1;
  void *local_8;
  
  if ((((this != (void *)0x0) && (*(int *)((int)this + 0x38) == 0)) && (param_1 != 0)) &&
     (*(int *)(param_1 + 0x34) != 0)) {
    iVar1 = CMapPtrToPtr::Lookup
                      ((CMapPtrToPtr *)(*(int *)(param_1 + 0x34) + 0x20),
                       *(void **)((int)this + 0x1c),&local_8);
    if (iVar1 != 0) {
      iVar1 = *(int *)((int)local_8 + 0x24);
      if ((iVar1 != 0) && (*(void **)(iVar1 + 0x38) == local_8)) {
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      *(void **)((int)this + 0x38) = local_8;
      *(void **)((int)local_8 + 0x24) = this;
    }
  }
  return;
}


