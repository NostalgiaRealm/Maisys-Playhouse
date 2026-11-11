
/* ==== FUN_00430990 @ 00430990 ==== 
 * signature: undefined __thiscall FUN_00430990(void * this, short param_1, undefined4 param_2)
 * body: 00430990-004309c9
 */

void __thiscall FUN_00430990(void *this,short param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  if ((0 < param_1) && (param_1 <= *(short *)((int)this + 0xc))) {
    pvVar1 = LocalLock(*(HLOCAL *)((int)this + 8));
    *(undefined4 *)((int)pvVar1 + param_1 * 4 + -4) = param_2;
    LocalUnlock(*(HLOCAL *)((int)this + 8));
  }
  return;
}


