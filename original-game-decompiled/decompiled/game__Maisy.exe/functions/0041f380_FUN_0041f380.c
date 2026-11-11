
/* ==== FUN_0041f380 @ 0041f380 ==== 
 * signature: short __thiscall FUN_0041f380(void * this, int param_1)
 * body: 0041f380-0041f3b3
 */

short __thiscall FUN_0041f380(void *this,int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)((int)this + 0x32)) {
    do {
      if (*(int *)(*(int *)((int)this + 0x26) + 4 + sVar1 * 0x18) == param_1) {
        return sVar1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)((int)this + 0x32));
  }
  return -1;
}


