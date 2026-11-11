
/* ==== FUN_0041f3c0 @ 0041f3c0 ==== 
 * signature: undefined2 __thiscall FUN_0041f3c0(void * this, int param_1)
 * body: 0041f3c0-0041f400
 */

undefined2 __thiscall FUN_0041f3c0(void *this,int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)((int)this + 0x32)) {
    do {
      if (*(int *)(*(int *)((int)this + 0x26) + 4 + sVar1 * 0x18) == param_1) {
        return *(undefined2 *)(*(int *)((int)this + 0x26) + sVar1 * 0x18 + 8);
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)((int)this + 0x32));
  }
  return 0xffff;
}


