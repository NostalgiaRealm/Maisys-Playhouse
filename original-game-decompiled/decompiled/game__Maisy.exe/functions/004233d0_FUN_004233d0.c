
/* ==== FUN_004233d0 @ 004233d0 ==== 
 * signature: undefined __thiscall FUN_004233d0(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * body: 004233d0-0042348e
 */

void __thiscall
FUN_004233d0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_00430190((int)this);
  if ((char)param_3 == '\0') {
    iVar2 = 1;
    if (0 < *(int *)((int)this + 0x26)) {
      do {
        iVar1 = FUN_004301c0(this,iVar2);
        if ((*(int *)(iVar1 + 4) != 1) ||
           ((**(code **)(**(int **)(iVar1 + 0xc) + 0x134))(param_1,param_2,param_3,0),
           param_4 != '\0')) {
          (**(code **)*param_1)(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)((int)this + 0x26));
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x26);
    if (0 < iVar2) {
      do {
        iVar1 = FUN_004301c0(this,iVar2);
        if ((*(int *)(iVar1 + 4) != 1) ||
           ((**(code **)(**(int **)(iVar1 + 0xc) + 0x134))(param_1,param_2,param_3,0),
           param_4 != '\0')) {
          (**(code **)*param_1)(iVar1);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_004301f0((int)this);
  return;
}


