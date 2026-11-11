
/* ==== FUN_004787b0 @ 004787b0 ==== 
 * signature: int * __thiscall FUN_004787b0(void * this, short param_1, char param_2, char param_3)
 * body: 004787b0-004788a1
 */

int * __thiscall FUN_004787b0(void *this,short param_1,char param_2,char param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined1 local_20 [16];
  int *local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  iVar2 = (int)param_1;
  this_00 = *(void **)((int)this + 0x54);
  if (param_2 != '\0') {
    if (iVar2 <= *(int *)((int)this_00 + 0x26)) {
      FUN_00430370(this_00,iVar2,local_20);
      if (local_c == (int *)0x0) {
        local_c = (int *)(**(code **)(*(int *)this + 0x188))(param_1);
        FUN_0042ff10(*(void **)((int)this + 0x54),iVar2,local_20);
        return local_c;
      }
      if (param_3 != '\0') {
        cVar1 = (**(code **)(*local_c + 0x10c))();
        if (cVar1 == '\0') {
          FUN_00486ae0(local_c,1);
        }
      }
    }
    return local_c;
  }
  if (iVar2 <= *(int *)((int)this_00 + 0x26)) {
    FUN_00430370(this_00,iVar2,local_20);
    if (local_10 == (int *)0x0) {
      if (param_3 != '\0') {
        local_10 = (int *)(**(code **)(*(int *)this + 0x184))(param_1);
        FUN_0042ff10(*(void **)((int)this + 0x54),iVar2,local_20);
        return local_10;
      }
    }
    else if (param_3 != '\0') {
      (**(code **)(*local_10 + 0x108))();
    }
  }
  return local_10;
}


