
/* ==== FUN_00440230 @ 00440230 ==== 
 * signature: char __thiscall FUN_00440230(void * this, ushort param_1)
 * body: 00440230-0044024d
 */

char __thiscall FUN_00440230(void *this,ushort param_1)

{
  return '\x01' - ((*(ushort *)((int)this + 0x82) & param_1) == 0);
}


