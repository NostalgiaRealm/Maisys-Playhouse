
/* ==== FUN_00450cd0 @ 00450cd0 ==== 
 * signature: undefined4 __thiscall FUN_00450cd0(void * this, int param_1, short param_2, undefined4 param_3, short * param_4)
 * body: 00450cd0-00450d2c
 */

undefined4 __thiscall
FUN_00450cd0(void *this,int param_1,short param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_14 [4];
  
  if (param_2 == 0) {
    uVar1 = FUN_004504e0(this,param_1);
    param_2 = (short)uVar1;
    if (param_2 == 0) {
      return 0x10000;
    }
  }
  FUN_00430370(*(void **)((int)this + 0x26),(int)param_2,local_14);
  if ((*(byte *)((int)local_14[0] + 0x21) & 0x20) == 0) {
    return 0x10000;
  }
  uVar2 = FUN_0042a120(local_14[0],param_3,param_4);
  return uVar2;
}


