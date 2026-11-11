
/* ==== FUN_00481bc0 @ 00481bc0 ==== 
 * signature: undefined4 __thiscall FUN_00481bc0(void * this, uint * param_1, uint param_2)
 * body: 00481bc0-00481c08
 */

undefined4 __thiscall FUN_00481bc0(void *this,uint *param_1,uint param_2)

{
  if ((*(byte *)((int)this + 0x15a) & 1) != 0) {
    *param_1 = (param_2 & 0xff00 | param_2 << 0x10) << 8 |
               (param_2 & 0xff0000 | param_2 >> 0x10) >> 8;
    return 0;
  }
  *param_1 = param_2;
  return 0;
}


