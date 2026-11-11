
/* ==== FUN_00430370 @ 00430370 ==== 
 * signature: undefined4 __thiscall FUN_00430370(void * this, int param_1, void * param_2)
 * body: 00430370-004303b9
 */

undefined4 __thiscall FUN_00430370(void *this,int param_1,void *param_2)

{
  size_t sVar1;
  HLOCAL hMem;
  uint in_EAX;
  LPVOID pvVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar4 = param_1 + -1;
  if ((-1 < iVar4) && (iVar4 < *(int *)((int)this + 0x26))) {
    sVar1 = *(size_t *)((int)this + 0x32);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar2 = LocalLock(hMem);
    FUN_0043f500(param_2,(void *)((int)pvVar2 + iVar4 * sVar1),sVar1);
    BVar3 = LocalUnlock(hMem);
    return CONCAT31((int3)((uint)BVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


