
/* ==== FUN_00460c80 @ 00460c80 ==== 
 * signature: undefined __thiscall FUN_00460c80(void * this, int param_1)
 * body: 00460c80-00460cad
 */

void __thiscall FUN_00460c80(void *this,int param_1)

{
  FUN_0046c510();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1e) & 4) != 0)) {
    (**(code **)(*(int *)this + 0x2a4))(*(undefined4 *)(param_1 + 0x52));
  }
  return;
}


