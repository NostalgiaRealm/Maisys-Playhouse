
/* ==== FUN_00430d20 @ 00430d20 ==== 
 * signature: undefined4 __thiscall FUN_00430d20(void * this, int param_1)
 * body: 00430d20-00430d77
 */

undefined4 __thiscall FUN_00430d20(void *this,int param_1)

{
  int iVar1;
  HLOCAL hMem;
  int iVar2;
  LPVOID pvVar3;
  undefined4 local_8;
  
  iVar2 = param_1 + -1;
  local_8 = 0;
  if ((-1 < iVar2) && (iVar2 < *(int *)((int)this + 0x26))) {
    iVar1 = *(int *)((int)this + 0x32);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar3 = LocalLock(hMem);
    FUN_0043f500(&local_8,(void *)((int)pvVar3 + iVar1 * iVar2),4);
    LocalUnlock(hMem);
    return local_8;
  }
  return 0;
}


