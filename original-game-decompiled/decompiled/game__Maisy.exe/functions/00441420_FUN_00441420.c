
/* ==== FUN_00441420 @ 00441420 ==== 
 * signature: undefined __thiscall FUN_00441420(void * this, byte param_1, char param_2)
 * body: 00441420-00441443
 */

void __thiscall FUN_00441420(void *this,byte param_1,char param_2)

{
  *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0x80 | param_1;
  if (param_2 != '\0') {
    FUN_004413b0();
  }
  return;
}


