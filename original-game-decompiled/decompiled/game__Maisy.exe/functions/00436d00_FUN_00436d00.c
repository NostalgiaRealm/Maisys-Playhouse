
/* ==== FUN_00436d00 @ 00436d00 ==== 
 * signature: char __thiscall FUN_00436d00(void * this, ushort param_1, uint param_2)
 * body: 00436d00-00436d48
 */

char __thiscall FUN_00436d00(void *this,ushort param_1,uint param_2)

{
  return '\x01' - ((*(uint *)(*(int *)((int)this + (short)(param_1 >> 8 & 0x8f) * 0x124 + 0x13c) +
                              0x74 + (param_1 & 0xff) * 0x80) & param_2) == 0);
}


