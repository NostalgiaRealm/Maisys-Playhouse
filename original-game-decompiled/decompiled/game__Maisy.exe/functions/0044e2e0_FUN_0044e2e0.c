
/* ==== FUN_0044e2e0 @ 0044e2e0 ==== 
 * signature: undefined __thiscall FUN_0044e2e0(void * this, char param_1)
 * body: 0044e2e0-0044e2f9
 */

void __thiscall FUN_0044e2e0(void *this,char param_1)

{
  *(byte *)((int)this + 0x46) =
       (param_1 << 3 ^ *(byte *)((int)this + 0x46)) & 8 ^ *(byte *)((int)this + 0x46);
  return;
}


