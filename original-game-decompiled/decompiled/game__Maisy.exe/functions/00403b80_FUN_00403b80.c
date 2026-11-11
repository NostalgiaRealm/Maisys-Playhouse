
/* ==== FUN_00403b80 @ 00403b80 ==== 
 * signature: undefined __thiscall FUN_00403b80(void * this, short * param_1)
 * body: 00403b80-00403baf
 */

void __thiscall FUN_00403b80(void *this,short *param_1)

{
  if ((*param_1 != 6) && (*param_1 != 7)) {
    FUN_00413790(this,param_1);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x8a) + 0x50))(param_1);
  return;
}


