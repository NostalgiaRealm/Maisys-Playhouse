
/* ==== FUN_0045d8c0 @ 0045d8c0 ==== 
 * signature: undefined __thiscall FUN_0045d8c0(void * this, undefined4 param_1, char param_2)
 * body: 0045d8c0-0045d985
 */

void __thiscall FUN_0045d8c0(void *this,undefined4 param_1,char param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined1 local_3c [28];
  int local_20;
  undefined4 *local_c;
  
  this_00 = *(void **)((int)this + 0x2e);
  if ((*(void **)((int)this + 0x32) != this_00) && ((*(byte *)((int)this + 0x4e) & 2) == 0)) {
    if ((param_2 == '\0') && (this_00 != (void *)0x0)) {
      if (*(int *)((int)this_00 + 0x26) != 0) {
        FUN_00430370(this_00,1,local_3c);
        if (local_20 != 0) {
          FUN_00486ce0(local_20);
        }
      }
      (**(code **)(**(int **)((int)this + 0x2e) + 4))();
    }
    if (*(int *)((int)this + 0x32) != 0) {
      iVar1 = *(int *)(*(int *)((int)this + 0x32) + 0x26);
      iVar2 = 1;
      if (0 < iVar1) {
        do {
          FUN_00430370(*(void **)((int)this + 0x32),iVar2,local_3c);
          if (local_c != (undefined4 *)0x0) {
            (**(code **)*local_c)(1);
            local_c = (undefined4 *)0x0;
            FUN_0042ff10(*(void **)((int)this + 0x32),iVar2,local_3c);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
      }
    }
    if (param_2 == '\0') {
      *(undefined4 *)((int)this + 0x2e) = *(undefined4 *)((int)this + 0x32);
    }
    *(undefined4 *)((int)this + 0x32) = 0;
    *(undefined4 *)((int)this + 0x2a) = *(undefined4 *)((int)this + 0x2e);
    (**(code **)(*(int *)this + 0x124))();
  }
  return;
}


