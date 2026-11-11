
/* ==== FUN_0042d570 @ 0042d570 ==== 
 * signature: undefined __thiscall FUN_0042d570(void * this, undefined2 param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * body: 0042d570-0042d5ab
 */

void __thiscall
FUN_0042d570(void *this,undefined2 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  for (; this != (int *)0x0; this = *(void **)((int)this + 0x3e)) {
    if (((*(byte *)((int)this + 0x29) & 0x80) == 0) && (param_4 != this)) {
      (**(code **)(*(int *)this + 600))(param_1,param_2,param_3);
    }
  }
  return;
}


