
/* ==== FUN_0046b940 @ 0046b940 ==== 
 * signature: undefined __thiscall FUN_0046b940(void * this, int param_1)
 * body: 0046b940-0046b976
 */

void __thiscall FUN_0046b940(void *this,int param_1)

{
  void *this_00;
  
  if (((*(byte *)((int)this + 0x38) & 1) == 0) || (*(int *)(param_1 + 0xc) != 0x7d2)) {
    for (this_00 = (void *)FUN_00469fb0(this); this_00 != (void *)0x0;
        this_00 = *(void **)((int)this_00 + 0x6a)) {
      FUN_0046b850(this_00,param_1);
    }
  }
  return;
}


