
/* ==== FUN_00460ce0 @ 00460ce0 ==== 
 * signature: undefined __thiscall FUN_00460ce0(void * this, undefined4 * param_1)
 * body: 00460ce0-00460d35
 */

void __thiscall FUN_00460ce0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x13e) != (void *)0x0) {
    FUN_004390e0(*(void **)((int)this + 0x13e),param_1);
    param_1[2] = *(undefined4 *)((int)this + 0x124);
    return;
  }
  *(undefined2 *)((int)param_1 + 6) = 9;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[2] = DAT_004da334;
  uVar1 = DAT_004da338;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = uVar1;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return;
}


