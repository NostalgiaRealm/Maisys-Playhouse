
/* ==== FUN_0042fe50 @ 0042fe50 ==== 
 * signature: undefined4 __thiscall FUN_0042fe50(void * this, void * param_1)
 * body: 0042fe50-0042feb5
 */

undefined4 __thiscall FUN_0042fe50(void *this,void *param_1)

{
  size_t sVar1;
  int iVar2;
  HLOCAL hMem;
  uint in_EAX;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x26) != 0) {
    sVar1 = *(size_t *)((int)this + 0x32);
    iVar2 = *(int *)((int)this + 0x26);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar3 = LocalLock(hMem);
    FUN_0043f500(param_1,(void *)((int)pvVar3 + (iVar2 + -1) * sVar1),sVar1);
    LocalUnlock(hMem);
    uVar4 = FUN_004303d0(this,*(int *)((int)this + 0x26) + -1,0);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


