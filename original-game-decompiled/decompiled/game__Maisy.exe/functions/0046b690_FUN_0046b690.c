
/* ==== FUN_0046b690 @ 0046b690 ==== 
 * signature: undefined4 __thiscall FUN_0046b690(void * this, int param_1, short * param_2)
 * body: 0046b690-0046b6e2
 */

undefined4 __thiscall FUN_0046b690(void *this,int param_1,short *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (param_1 != 0x19) {
    return in_EAX & 0xffffff00;
  }
  if (*param_2 != 0) {
    in_EAX = FUN_00414340(this,param_2,0x1a);
    if ((char)in_EAX != '\0') {
      (**(code **)(*(int *)this + 0x148))((char)param_2[1]);
      uVar1 = (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


