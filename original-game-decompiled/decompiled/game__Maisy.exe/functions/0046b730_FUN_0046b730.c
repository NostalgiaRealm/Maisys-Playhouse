
/* ==== FUN_0046b730 @ 0046b730 ==== 
 * signature: undefined __thiscall FUN_0046b730(void * this, int param_1)
 * body: 0046b730-0046b767
 */

void __thiscall FUN_0046b730(void *this,int param_1)

{
  if (((*(byte *)((int)this + 0x38) & 1) == 0) || (*(int *)(param_1 + 0xc) != 0x7d2)) {
    FUN_0046b770(this,param_1);
    if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
      (**(code **)(*(int *)this + 600))(param_1);
    }
  }
  return;
}


