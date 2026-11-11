
/* ==== FUN_004144c0 @ 004144c0 ==== 
 * signature: undefined __thiscall FUN_004144c0(void * this, short param_1)
 * body: 004144c0-004144f3
 */

void __thiscall FUN_004144c0(void *this,short param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 0x10) & 1) != 0) {
    iVar1 = *(int *)((int)this + 4);
    if (((iVar1 != 0) && (*(short *)(iVar1 + 0x22) == 1)) &&
       (*(void **)(iVar1 + 0x6e) != (void *)0x0)) {
      FUN_00448530(*(void **)(iVar1 + 0x6e),(int)this,param_1);
    }
    *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) & 0xfe;
  }
  return;
}


