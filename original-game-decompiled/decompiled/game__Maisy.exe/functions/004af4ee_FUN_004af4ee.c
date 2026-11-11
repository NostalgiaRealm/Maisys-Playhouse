
/* ==== FUN_004af4ee @ 004af4ee ==== 
 * signature: undefined4 __thiscall FUN_004af4ee(void * this, undefined4 * param_1)
 * body: 004af4ee-004af511
 */

undefined4 __thiscall FUN_004af4ee(void *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *(undefined4 *)((int)this + 0x1c);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  return 1;
}


