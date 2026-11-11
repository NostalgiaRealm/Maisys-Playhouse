
/* ==== FUN_0040d620 @ 0040d620 ==== 
 * signature: undefined __thiscall FUN_0040d620(void * this, char param_1)
 * body: 0040d620-0040d639
 */

void __thiscall FUN_0040d620(void *this,char param_1)

{
  *(byte *)((int)this + 0x6b) =
       (param_1 << 2 ^ *(byte *)((int)this + 0x6b)) & 4 ^ *(byte *)((int)this + 0x6b);
  return;
}


