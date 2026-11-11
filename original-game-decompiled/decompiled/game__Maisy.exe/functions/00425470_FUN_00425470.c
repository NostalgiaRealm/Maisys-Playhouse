
/* ==== FUN_00425470 @ 00425470 ==== 
 * signature: undefined __thiscall FUN_00425470(void * this, byte param_1)
 * body: 00425470-00425487
 */

void __thiscall FUN_00425470(void *this,byte param_1)

{
  *(byte *)((int)this + 100) =
       (param_1 ^ *(byte *)((int)this + 100)) & 1 ^ *(byte *)((int)this + 100);
  return;
}


