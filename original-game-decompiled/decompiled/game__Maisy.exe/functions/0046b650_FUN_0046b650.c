
/* ==== FUN_0046b650 @ 0046b650 ==== 
 * signature: undefined4 __thiscall FUN_0046b650(void * this, int param_1, short * param_2)
 * body: 0046b650-0046b682
 */

uint __thiscall FUN_0046b650(void *this,int param_1,short *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (param_1 != 0x19) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = FUN_00415ab0('\x01' - ((*(uint *)((int)this + 0x26) & 0x1000000) == 0),param_2,this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


