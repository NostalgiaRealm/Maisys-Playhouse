
/* ==== FUN_12004ca0 @ 12004ca0 ==== 
 * signature: undefined __thiscall FUN_12004ca0(void * this, undefined4 * param_1)
 * body: 12004ca0-12004ce4
 */

void __thiscall FUN_12004ca0(void *this,undefined4 *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)((int)this + 4);
  *(short *)((int)this + 4) = sVar1 + 1;
  if (sVar1 == 0) {
    (**(code **)(*(int *)((int)this + 6) + 4))();
  }
  param_1[4] = *(undefined4 *)((int)this + 0x12);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x10);
  param_1[6] = 0;
  param_1[5] = 0;
  *(char *)((int)this + 10) = *(char *)((int)this + 10) + '\x01';
  *param_1 = *(undefined4 *)this;
  *(undefined4 **)this = param_1;
  *(char *)((int)this + 10) = *(char *)((int)this + 10) + -1;
  return;
}


