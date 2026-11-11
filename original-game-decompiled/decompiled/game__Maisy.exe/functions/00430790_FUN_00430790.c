
/* ==== FUN_00430790 @ 00430790 ==== 
 * signature: undefined __thiscall FUN_00430790(void * this, int param_1)
 * body: 00430790-004307d0
 */

void __thiscall FUN_00430790(void *this,int param_1)

{
  short sVar1;
  LPVOID pvVar2;
  
  sVar1 = FUN_00430860(this,param_1);
  if (sVar1 != -1) {
    pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
    *(undefined4 *)((int)pvVar2 + sVar1 * 4) = 0;
    LocalUnlock(*(HLOCAL *)((int)this + 8));
    FUN_004309d0((int)this);
  }
  return;
}


