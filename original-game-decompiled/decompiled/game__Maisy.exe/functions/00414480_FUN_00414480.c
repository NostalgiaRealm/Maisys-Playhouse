
/* ==== FUN_00414480 @ 00414480 ==== 
 * signature: undefined __thiscall FUN_00414480(void * this, short param_1, short param_2)
 * body: 00414480-004144b9
 */

void __thiscall FUN_00414480(void *this,short param_1,short param_2)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 0x10) & 1) == 0) {
    iVar1 = *(int *)((int)this + 4);
    if (((iVar1 != 0) && (*(short *)(iVar1 + 0x22) == 1)) &&
       (*(void **)(iVar1 + 0x6e) != (void *)0x0)) {
      FUN_004484d0(*(void **)(iVar1 + 0x6e),(int)this,param_1,param_2,'\x01');
    }
    *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 1;
  }
  return;
}


