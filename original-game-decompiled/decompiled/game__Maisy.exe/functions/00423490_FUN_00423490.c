
/* ==== FUN_00423490 @ 00423490 ==== 
 * signature: undefined __thiscall FUN_00423490(void * this, undefined4 * param_1, undefined4 param_2, char param_3, char param_4)
 * body: 00423490-00423552
 */

void __thiscall
FUN_00423490(void *this,undefined4 *param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_1c [4];
  int local_18;
  int *local_10;
  void *local_8;
  
  local_8 = this;
  if (param_3 == '\0') {
    iVar2 = 1;
    if (0 < *(int *)((int)this + 0x26)) {
      do {
        uVar1 = FUN_00430370(local_8,iVar2,local_1c);
        if (((char)uVar1 != '\0') &&
           ((local_18 != 1 ||
            ((**(code **)(*local_10 + 0x134))(param_1,param_2,0,0), param_4 != '\0')))) {
          (**(code **)*param_1)(local_1c);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)((int)local_8 + 0x26));
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x26);
    if (0 < iVar2) {
      do {
        uVar1 = FUN_00430370(local_8,iVar2,local_1c);
        if (((char)uVar1 != '\0') &&
           ((local_18 != 1 ||
            ((**(code **)(*local_10 + 0x134))(param_1,param_2,param_3,0), param_4 != '\0')))) {
          (**(code **)*param_1)(local_1c);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}


