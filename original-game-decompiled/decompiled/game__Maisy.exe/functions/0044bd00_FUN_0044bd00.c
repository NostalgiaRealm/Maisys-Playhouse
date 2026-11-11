
/* ==== FUN_0044bd00 @ 0044bd00 ==== 
 * signature: char __thiscall FUN_0044bd00(void * this, ushort param_1)
 * body: 0044bd00-0044bd1d
 */

char __thiscall FUN_0044bd00(void *this,ushort param_1)

{
  return '\x01' - ((*(ushort *)((int)this + 0x82) & param_1) == 0);
}


