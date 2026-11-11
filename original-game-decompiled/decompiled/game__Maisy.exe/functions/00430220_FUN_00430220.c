
/* ==== FUN_00430220 @ 00430220 ==== 
 * signature: undefined __thiscall FUN_00430220(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 00430220-004302a0
 */

void __thiscall FUN_00430220(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_00430190((int)this);
  if (param_1 != (undefined4 *)0x0) {
    iVar3 = 1;
    if (param_2 == (undefined4 *)0x0) {
      if (0 < *(int *)((int)this + 0x26)) {
        do {
          iVar2 = FUN_004301c0(this,iVar3);
          if (iVar2 != 0) {
            (**(code **)*param_1)(iVar2);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= *(int *)((int)this + 0x26));
      }
    }
    else if (0 < *(int *)((int)this + 0x26)) {
      do {
        iVar2 = FUN_004301c0(this,iVar3);
        if ((iVar2 != 0) && (cVar1 = (**(code **)*param_2)(iVar2), cVar1 != '\0')) {
          (**(code **)*param_1)(iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)((int)this + 0x26));
    }
  }
  FUN_004301f0((int)this);
  return;
}


