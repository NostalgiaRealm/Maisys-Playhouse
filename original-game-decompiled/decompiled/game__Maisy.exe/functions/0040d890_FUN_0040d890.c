
/* ==== FUN_0040d890 @ 0040d890 ==== 
 * signature: char __thiscall FUN_0040d890(void * this, char param_1)
 * body: 0040d890-0040d8b4
 */

char __thiscall FUN_0040d890(void *this,char param_1)

{
  return '\x01' - ((1 << (0x1fU - param_1 & 0x1f) & *(uint *)((int)this + 0x3a)) == 0);
}


