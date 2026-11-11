
/* ==== FUN_0042fca0 @ 0042fca0 ==== 
 * signature: undefined __thiscall FUN_0042fca0(void * this, int param_1, int param_2)
 * body: 0042fca0-0042fd31
 */

void __thiscall FUN_0042fca0(void *this,int param_1,int param_2)

{
  size_t sVar1;
  HLOCAL hMem;
  void *pvVar2;
  LPVOID pvVar3;
  
  if ((param_1 <= *(int *)((int)this + 0x26)) && (param_2 <= *(int *)((int)this + 0x26))) {
    pvVar2 = (void *)FUN_00434920(DAT_004d99ac,*(SIZE_T *)((int)this + 0x32),0);
    if (pvVar2 == (void *)0x0) {
      FUN_004a3538();
    }
    sVar1 = *(size_t *)((int)this + 0x32);
    hMem = *(HLOCAL *)((int)this + 0x36);
    pvVar3 = LocalLock(hMem);
    FUN_0043f500(pvVar2,(void *)((param_1 + -1) * sVar1 + (int)pvVar3),sVar1);
    LocalUnlock(hMem);
    FUN_00430090(this,param_1);
    FUN_0042ff60(this,param_2,pvVar2);
    FUN_00434950(pvVar2);
  }
  return;
}


