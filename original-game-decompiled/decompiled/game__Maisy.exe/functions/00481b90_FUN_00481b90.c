
/* ==== FUN_00481b90 @ 00481b90 ==== 
 * signature: undefined4 __thiscall FUN_00481b90(void * this, undefined2 * param_1, undefined2 param_2)
 * body: 00481b90-00481bbf
 */

undefined4 __thiscall FUN_00481b90(void *this,undefined2 *param_1,undefined2 param_2)

{
  if ((*(byte *)((int)this + 0x15a) & 1) != 0) {
    *param_1 = CONCAT11((char)param_2,(char)((ushort)param_2 >> 8));
    return 0;
  }
  *param_1 = param_2;
  return 0;
}


