
/* ==== FUN_00450c40 @ 00450c40 ==== 
 * signature: undefined4 __thiscall FUN_00450c40(void * this, int param_1, short * param_2, undefined4 param_3, undefined4 param_4)
 * body: 00450c40-00450ccd
 */

undefined4 __thiscall
FUN_00450c40(void *this,int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  int *local_14 [4];
  
  if (*param_2 == 0) {
    in_EAX = FUN_004504e0(this,param_1);
    *param_2 = (short)in_EAX;
  }
  sVar1 = *param_2;
  uVar2 = CONCAT22((short)(in_EAX >> 0x10),sVar1);
  if (sVar1 != 0) {
    uVar2 = FUN_00430370(*(void **)((int)this + 0x26),(int)sVar1,local_14);
    if ((*(byte *)((int)local_14[0] + 0x1e) & 0x80) != 0) {
      uVar3 = *(undefined4 *)((int)local_14[0] + 0x2a);
      (**(code **)(*local_14[0] + 0x10c))(0);
      FUN_00474c50(local_14[0],param_3,param_4);
      (**(code **)(*local_14[0] + 0x10c))(uVar3);
      uVar3 = (**(code **)(*local_14[0] + 0x110))((int)*param_2);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


