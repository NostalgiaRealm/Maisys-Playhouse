
/* ==== FUN_0046b850 @ 0046b850 ==== 
 * signature: undefined __thiscall FUN_0046b850(void * this, int param_1)
 * body: 0046b850-0046b887
 */

void __thiscall FUN_0046b850(void *this,int param_1)

{
  if (((*(byte *)((int)this + 0x38) & 1) == 0) || (*(int *)(param_1 + 0xc) != 0x7d2)) {
    FUN_0046b890(this,param_1);
    if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
      (**(code **)(*(int *)this + 0x25c))(param_1);
    }
  }
  return;
}


