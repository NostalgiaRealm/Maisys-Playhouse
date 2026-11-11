
/* ==== FUN_004817e0 @ 004817e0 ==== 
 * signature: undefined4 __thiscall FUN_004817e0(void * this, undefined2 * param_1, undefined2 param_2)
 * body: 004817e0-0048180f
 */

undefined4 __thiscall FUN_004817e0(void *this,undefined2 *param_1,undefined2 param_2)

{
  if ((*(byte *)((int)this + 0x15a) & 1) != 0) {
    *param_1 = CONCAT11((char)param_2,(char)((ushort)param_2 >> 8));
    return 0;
  }
  *param_1 = param_2;
  return 0;
}


