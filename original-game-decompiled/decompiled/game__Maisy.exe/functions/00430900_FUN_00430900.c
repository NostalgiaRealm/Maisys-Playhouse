
/* ==== FUN_00430900 @ 00430900 ==== 
 * signature: undefined __thiscall FUN_00430900(void * this, short param_1, undefined4 param_2)
 * body: 00430900-0043098c
 */

void __thiscall FUN_00430900(void *this,short param_1,undefined4 param_2)

{
  short sVar1;
  HLOCAL hMem;
  LPVOID pvVar2;
  int iVar3;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_004306b0(this,param_2);
    return;
  }
  FUN_004306b0(this,param_2);
  sVar1 = *(short *)((int)this + 0xc);
  if (param_1 < sVar1) {
    iVar3 = (int)param_1;
    hMem = *(HLOCAL *)((int)this + 8);
    pvVar2 = LocalLock(hMem);
    FUN_0043f500((void *)((int)pvVar2 + iVar3 * 4),(void *)((int)pvVar2 + iVar3 * 4 + -4),
                 (sVar1 - iVar3) * 4);
    LocalUnlock(hMem);
    pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
    *(undefined4 *)((int)pvVar2 + iVar3 * 4 + -4) = param_2;
    LocalUnlock(*(HLOCAL *)((int)this + 8));
  }
  return;
}


