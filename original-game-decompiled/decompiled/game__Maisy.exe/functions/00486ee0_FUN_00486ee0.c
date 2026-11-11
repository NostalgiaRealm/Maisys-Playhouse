
/* ==== FUN_00486ee0 @ 00486ee0 ==== 
 * signature: undefined4 __thiscall FUN_00486ee0(void * this, short param_1)
 * body: 00486ee0-00486efc
 */

undefined4 __thiscall FUN_00486ee0(void *this,short param_1)

{
  return CONCAT31((int3)(char)((ushort)param_1 >> 8),
                  (uint)**(byte **)((int)this + 0x160) - (int)param_1 == 0x41);
}


