
/* ==== FUN_00430000 @ 00430000 ==== 
 * signature: undefined __thiscall FUN_00430000(void * this, int param_1, int param_2)
 * body: 00430000-00430080
 */

void __thiscall FUN_00430000(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HLOCAL hMem;
  LPVOID pvVar3;
  
  if ((param_1 <= *(int *)((int)this + 0x26) + 1) && (0 < param_1)) {
    FUN_004303d0(this,*(int *)((int)this + 0x26) + param_2,0);
    iVar1 = *(int *)((int)this + 0x32);
    iVar2 = *(int *)((int)this + 0x26);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar3 = LocalLock(hMem);
    FUN_0043f500((void *)((int)pvVar3 + (param_1 + param_2 + -1) * iVar1),
                 (void *)((param_1 + -1) * iVar1 + (int)pvVar3),
                 (((iVar2 - param_2) - param_1) + 1) * iVar1);
    LocalUnlock(hMem);
  }
  return;
}


