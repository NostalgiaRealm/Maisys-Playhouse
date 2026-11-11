
/* ==== FUN_0042fec0 @ 0042fec0 ==== 
 * signature: undefined __thiscall FUN_0042fec0(void * this, void * param_1)
 * body: 0042fec0-0042ff05
 */

void __thiscall FUN_0042fec0(void *this,void *param_1)

{
  size_t sVar1;
  int iVar2;
  HLOCAL hMem;
  LPVOID pvVar3;
  
  FUN_004303d0(this,*(int *)((int)this + 0x26) + 1,0);
  sVar1 = *(size_t *)((int)this + 0x32);
  iVar2 = *(int *)((int)this + 0x26);
  hMem = *(HLOCAL *)((int)this + 0x36);
  pvVar3 = LocalLock(hMem);
  FUN_0043f500((void *)((int)pvVar3 + (iVar2 + -1) * sVar1),param_1,sVar1);
  LocalUnlock(hMem);
  return;
}


