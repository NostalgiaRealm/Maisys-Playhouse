
/* ==== FUN_0040cee0 @ 0040cee0 ==== 
 * signature: undefined4 __fastcall FUN_0040cee0(int param_1)
 * body: 0040cee0-0040cf18
 */

undefined4 __fastcall FUN_0040cee0(int param_1)

{
  uint in_EAX;
  int iVar1;
  void *this;
  short sVar2;
  
  if ((*(int *)(param_1 + 0x2a) != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = FUN_00466a80(*(int *)(param_1 + 4));
    in_EAX = 0;
    if (iVar1 != 0) {
      sVar2 = *(short *)(param_1 + 0x36);
      this = (void *)FUN_00466a80(*(int *)(param_1 + 4));
      in_EAX = FUN_00450230(this,sVar2);
      if (in_EAX == param_1) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


