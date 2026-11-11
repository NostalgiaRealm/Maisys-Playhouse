
/* ==== FUN_0042fd40 @ 0042fd40 ==== 
 * signature: undefined __thiscall FUN_0042fd40(void * this, int param_1, int param_2)
 * body: 0042fd40-0042fe43
 */

void __thiscall FUN_0042fd40(void *this,int param_1,int param_2)

{
  size_t sVar1;
  HLOCAL pvVar2;
  void *pvVar3;
  LPVOID pvVar4;
  
  if (((param_1 <= *(int *)((int)this + 0x26)) && (param_2 <= *(int *)((int)this + 0x26))) &&
     (param_2 != param_1)) {
    pvVar3 = (void *)FUN_00434920(DAT_004d99ac,*(SIZE_T *)((int)this + 0x32),0);
    if (pvVar3 == (void *)0x0) {
      FUN_004a3538();
    }
    sVar1 = *(size_t *)((int)this + 0x32);
    pvVar2 = *(HLOCAL *)((int)this + 0x36);
    pvVar4 = LocalLock(pvVar2);
    FUN_0043f500(pvVar3,(void *)(sVar1 * (param_1 + -1) + (int)pvVar4),sVar1);
    LocalUnlock(pvVar2);
    sVar1 = *(size_t *)((int)this + 0x32);
    pvVar2 = *(HLOCAL *)((int)this + 0x36);
    pvVar4 = LocalLock(pvVar2);
    FUN_0043f500((void *)(sVar1 * (param_1 + -1) + (int)pvVar4),
                 (void *)(sVar1 * (param_2 + -1) + (int)pvVar4),sVar1);
    LocalUnlock(pvVar2);
    sVar1 = *(size_t *)((int)this + 0x32);
    pvVar2 = *(HLOCAL *)((int)this + 0x36);
    pvVar4 = LocalLock(pvVar2);
    FUN_0043f500((void *)((int)pvVar4 + sVar1 * (param_2 + -1)),pvVar3,sVar1);
    LocalUnlock(pvVar2);
    FUN_00434950(pvVar3);
  }
  return;
}


