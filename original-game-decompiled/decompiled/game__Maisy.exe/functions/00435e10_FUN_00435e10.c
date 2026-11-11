
/* ==== FUN_00435e10 @ 00435e10 ==== 
 * signature: undefined __thiscall FUN_00435e10(void * this, int param_1)
 * body: 00435e10-00435e60
 */

void __thiscall FUN_00435e10(void *this,int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x4a) != -1) {
    iVar1 = *(int *)((int)this + *(short *)(param_1 + 0x48) * 0x124 + 0x13c) +
            *(short *)(param_1 + 0x4a) * 0x80;
    if ((*(byte *)(iVar1 + 0x78) & 1) == 0) {
      FUN_00435e10(this,iVar1);
    }
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
      FUN_00436380(this,param_1);
    }
  }
  return;
}


