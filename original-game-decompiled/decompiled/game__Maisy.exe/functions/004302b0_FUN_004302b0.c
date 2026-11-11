
/* ==== FUN_004302b0 @ 004302b0 ==== 
 * signature: undefined __thiscall FUN_004302b0(void * this, int * param_1, undefined4 * param_2)
 * body: 004302b0-0043034e
 */

void __thiscall FUN_004302b0(void *this,int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  FUN_00430190((int)this);
  if (param_1 != (int *)0x0) {
    local_8 = 1;
    if (param_2 == (undefined4 *)0x0) {
      if (0 < *(int *)((int)this + 0x26)) {
        do {
          iVar2 = FUN_004301c0(this,local_8);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 4))(iVar2,&local_8);
          }
          local_8 = local_8 + 1;
        } while (local_8 <= *(int *)((int)this + 0x26));
      }
    }
    else if (0 < *(int *)((int)this + 0x26)) {
      do {
        iVar2 = FUN_004301c0(this,local_8);
        if ((iVar2 != 0) && (cVar1 = (**(code **)*param_2)(iVar2), cVar1 != '\0')) {
          (**(code **)(*param_1 + 4))(iVar2,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 <= *(int *)((int)this + 0x26));
    }
  }
  FUN_004301f0((int)this);
  return;
}


