
/* ==== FUN_0040b290 @ 0040b290 ==== 
 * signature: undefined __thiscall FUN_0040b290(void * this, byte param_1)
 * body: 0040b290-0040b2a8
 */

void __thiscall FUN_0040b290(void *this,byte param_1)

{
  *(byte *)((int)this + 0x38) =
       (*(byte *)((int)this + 0x38) ^ param_1) & 1 ^ *(byte *)((int)this + 0x38);
  return;
}


