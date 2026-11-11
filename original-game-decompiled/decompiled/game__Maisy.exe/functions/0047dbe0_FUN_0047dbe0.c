
/* ==== FUN_0047dbe0 @ 0047dbe0 ==== 
 * signature: undefined4 __thiscall FUN_0047dbe0(void * this, int param_1)
 * body: 0047dbe0-0047dc02
 */

uint __thiscall FUN_0047dbe0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  
  puVar1 = *(undefined4 **)this;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return in_EAX & 0xffffff00;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    in_EAX = param_1;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


