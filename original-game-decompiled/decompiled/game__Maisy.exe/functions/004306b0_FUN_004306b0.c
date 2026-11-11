
/* ==== FUN_004306b0 @ 004306b0 ==== 
 * signature: undefined __thiscall FUN_004306b0(void * this, undefined4 param_1)
 * body: 004306b0-00430710
 */

void __thiscall FUN_004306b0(void *this,undefined4 param_1)

{
  HLOCAL pvVar1;
  LPVOID pvVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    pvVar1 = FUN_0043f6f0(4);
    *(HLOCAL *)((int)this + 8) = pvVar1;
    if (pvVar1 == (HLOCAL)0x0) {
      FUN_004a3538();
    }
  }
  FUN_0043f730(*(HLOCAL *)((int)this + 8),*(short *)((int)this + 0xc) * 4 + 4);
  pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
  *(undefined4 *)((int)pvVar2 + *(short *)((int)this + 0xc) * 4) = param_1;
  LocalUnlock(*(HLOCAL *)((int)this + 8));
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  return;
}


