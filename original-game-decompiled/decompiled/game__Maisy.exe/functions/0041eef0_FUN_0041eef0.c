
/* ==== FUN_0041eef0 @ 0041eef0 ==== 
 * signature: short __thiscall FUN_0041eef0(void * this, int param_1)
 * body: 0041eef0-0041ef25
 */

short __thiscall FUN_0041eef0(void *this,int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)((int)this + 0x34)) {
    do {
      if (*(int *)(**(int **)((int)this + 0x2e) + 4 + sVar1 * 10) == param_1) {
        return sVar1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)((int)this + 0x34));
  }
  return -1;
}


