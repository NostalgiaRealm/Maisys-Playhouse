
/* ==== FUN_0041ef30 @ 0041ef30 ==== 
 * signature: undefined __thiscall FUN_0041ef30(void * this, short param_1, undefined2 * param_2, undefined4 * param_3)
 * body: 0041ef30-0041ef89
 */

void __thiscall FUN_0041ef30(void *this,short param_1,undefined2 *param_2,undefined4 *param_3)

{
  if ((-1 < param_1) && (param_1 < *(short *)((int)this + 0x34))) {
    *param_3 = *(undefined4 *)(**(int **)((int)this + 0x2e) + 4 + param_1 * 10);
    *param_2 = *(undefined2 *)(**(int **)((int)this + 0x2e) + 8 + param_1 * 10);
    return;
  }
  *param_2 = 0xffff;
  *param_3 = 0;
  return;
}


