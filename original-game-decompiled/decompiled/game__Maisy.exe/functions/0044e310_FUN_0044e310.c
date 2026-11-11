
/* ==== FUN_0044e310 @ 0044e310 ==== 
 * signature: undefined __thiscall FUN_0044e310(void * this, char param_1)
 * body: 0044e310-0044e32a
 */

void __thiscall FUN_0044e310(void *this,char param_1)

{
  *(byte *)((int)this + 0x46) =
       (param_1 << 5 ^ *(byte *)((int)this + 0x46)) & 0x20 ^ *(byte *)((int)this + 0x46);
  return;
}


