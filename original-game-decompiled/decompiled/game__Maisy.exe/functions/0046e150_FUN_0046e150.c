
/* ==== FUN_0046e150 @ 0046e150 ==== 
 * signature: undefined4 __thiscall FUN_0046e150(void * this, int * param_1)
 * body: 0046e150-0046e208
 */

undefined4 __thiscall FUN_0046e150(void *this,int *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_EAX;
  ushort uVar4;
  int *piVar3;
  
  uVar4 = (ushort)((uint)in_EAX >> 0x10);
  if (param_1 == (int *)0x0) {
    return CONCAT22(uVar4,0xd);
  }
  uVar2 = *(uint *)((int)param_1 + 0x1e);
  if ((uVar2 & 0x400) != 0) {
    return (uint)uVar4 << 0x10;
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 0x4800000) == 0) {
      return CONCAT22(uVar4,10);
    }
    return CONCAT22(uVar4,9);
  }
  sVar1 = *(short *)((int)param_1 + 0x22);
  piVar3 = (int *)CONCAT22(uVar4,sVar1);
  if (sVar1 == 0x43) {
    return CONCAT22(uVar4,4);
  }
  if (sVar1 == 0x40) {
    return CONCAT22(uVar4,5);
  }
  if (sVar1 == 0x3f) {
    return CONCAT22(uVar4,6);
  }
  if ((((short)param_1[0x18] == 0) && ((uVar2 & 0x40000000) == 0)) && (sVar1 != 0x43)) {
    return CONCAT22(uVar4,7);
  }
  while( true ) {
    if (this == (int *)0x0) {
      return (uint)piVar3 & 0xffff0000;
    }
    if (this == param_1) break;
    this = (void *)(**(code **)(*(int *)this + 0x16c))();
    piVar3 = this;
  }
  return CONCAT22((short)((uint)piVar3 >> 0x10),0xb);
}


