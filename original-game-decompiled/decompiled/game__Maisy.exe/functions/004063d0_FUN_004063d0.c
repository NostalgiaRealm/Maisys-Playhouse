
/* ==== FUN_004063d0 @ 004063d0 ==== 
 * signature: undefined2 __thiscall FUN_004063d0(void * this, int param_1)
 * body: 004063d0-0040643a
 */

undefined2 __thiscall FUN_004063d0(void *this,int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x92) != -1) &&
     ((int)*(short *)(param_1 + 0x92) < *(int *)(*(int *)((int)this + 0x56) + 0x26))) {
    iVar1 = FUN_00430190(*(int *)((int)this + 0x56));
    if (*(int *)(*(short *)(param_1 + 0x92) * 0x1a + iVar1) == param_1) {
      FUN_004301f0(*(int *)((int)this + 0x56));
      return *(undefined2 *)(param_1 + 0x92);
    }
    FUN_004301f0(*(int *)((int)this + 0x56));
    return 0xffff;
  }
  return 0xffff;
}


