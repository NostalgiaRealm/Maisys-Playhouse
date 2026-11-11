
/* ==== FUN_004413e0 @ 004413e0 ==== 
 * signature: undefined __thiscall FUN_004413e0(void * this, byte param_1, char param_2)
 * body: 004413e0-0044141a
 */

void __thiscall FUN_004413e0(void *this,byte param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x96);
  if (bVar1 >> 7 != param_1) {
    if (param_1 == 0) {
      bVar1 = bVar1 & 0x7f;
    }
    else {
      bVar1 = bVar1 | 0x80;
    }
    *(byte *)((int)this + 0x96) = bVar1;
    if (param_2 != '\0') {
      FUN_004413b0();
    }
  }
  return;
}


