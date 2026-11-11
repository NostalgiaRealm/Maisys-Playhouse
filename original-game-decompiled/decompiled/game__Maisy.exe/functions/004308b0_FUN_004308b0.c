
/* ==== FUN_004308b0 @ 004308b0 ==== 
 * signature: undefined4 __thiscall FUN_004308b0(void * this, short param_1)
 * body: 004308b0-004308f0
 */

undefined4 __thiscall FUN_004308b0(void *this,short param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  if ((0 < param_1) && (param_1 <= *(short *)((int)this + 0xc))) {
    pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
    uVar1 = *(undefined4 *)((int)pvVar2 + param_1 * 4 + -4);
    LocalUnlock(*(HLOCAL *)((int)this + 8));
    return uVar1;
  }
  return 0;
}


