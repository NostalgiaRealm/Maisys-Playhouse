
/* ==== FUN_004254a0 @ 004254a0 ==== 
 * signature: undefined __thiscall FUN_004254a0(void * this, char param_1)
 * body: 004254a0-004254b8
 */

void __thiscall FUN_004254a0(void *this,char param_1)

{
  *(byte *)((int)this + 100) =
       (param_1 * '\x02' ^ *(byte *)((int)this + 100)) & 2 ^ *(byte *)((int)this + 100);
  return;
}


