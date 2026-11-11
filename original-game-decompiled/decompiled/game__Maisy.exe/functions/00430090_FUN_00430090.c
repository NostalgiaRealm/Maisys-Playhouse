
/* ==== FUN_00430090 @ 00430090 ==== 
 * signature: undefined4 __thiscall FUN_00430090(void * this, int param_1)
 * body: 00430090-0043010f
 */

undefined4 __thiscall FUN_00430090(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HLOCAL hMem;
  uint in_EAX;
  LPVOID pvVar5;
  undefined4 uVar6;
  
  if ((0 < param_1) && (param_1 <= *(int *)((int)this + 0x26))) {
    iVar1 = *(int *)((int)this + 0x26);
    iVar2 = *(int *)((int)this + 0x32);
    iVar3 = *(int *)((int)this + 0x32);
    iVar4 = *(int *)((int)this + 0x32);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar5 = LocalLock(hMem);
    FUN_0043f500((void *)((param_1 + -1) * iVar4 + (int)pvVar5),
                 (void *)(iVar2 * param_1 + (int)pvVar5),(iVar1 - param_1) * iVar3);
    LocalUnlock(hMem);
    uVar6 = FUN_004303d0(this,*(int *)((int)this + 0x26) + -1,0);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


