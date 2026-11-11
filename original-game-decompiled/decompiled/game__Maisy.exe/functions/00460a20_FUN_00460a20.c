
/* ==== FUN_00460a20 @ 00460a20 ==== 
 * signature: undefined __thiscall FUN_00460a20(void * this, char param_1)
 * body: 00460a20-00460a40
 */

void __thiscall FUN_00460a20(void *this,char param_1)

{
  *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) & 0x7f ^ param_1 << 7;
  return;
}


