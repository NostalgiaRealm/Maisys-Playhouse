
/* ==== FUN_00466fd0 @ 00466fd0 ==== 
 * signature: undefined4 __thiscall FUN_00466fd0(void * this, int * param_1)
 * body: 00466fd0-0046702e
 */

undefined4 __thiscall FUN_00466fd0(void *this,int *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xd);
  }
  uVar1 = *(uint *)((int)param_1 + 0x1e);
  if ((uVar1 & 0x400) == 0) {
    return CONCAT22((short)(uVar1 >> 0x10),10);
  }
  if (((uVar1 & 0x80) == 0) && (*(short *)((int)param_1 + 0x22) != 0x51)) {
    if ((uVar1 & 0x10) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x24c))();
      if ((char)uVar1 != '\0') goto LAB_00467017;
    }
    return CONCAT22((short)(uVar1 >> 0x10),3);
  }
LAB_00467017:
  uVar2 = FUN_004241f0(this,param_1);
  return uVar2;
}


