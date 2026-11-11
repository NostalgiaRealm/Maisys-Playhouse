
/* ==== FUN_00430860 @ 00430860 ==== 
 * signature: short __thiscall FUN_00430860(void * this, int param_1)
 * body: 00430860-004308a8
 */

short __thiscall FUN_00430860(void *this,int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  short sVar3;
  
  sVar3 = 0;
  while( true ) {
    if (*(short *)((int)this + 0xc) <= sVar3) {
      return -1;
    }
    pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
    iVar1 = *(int *)((int)pvVar2 + sVar3 * 4);
    LocalUnlock(*(HLOCAL *)((int)this + 8));
    if (param_1 == iVar1) break;
    sVar3 = sVar3 + 1;
  }
  return sVar3;
}


