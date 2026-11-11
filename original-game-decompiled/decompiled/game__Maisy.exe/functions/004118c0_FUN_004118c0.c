
/* ==== FUN_004118c0 @ 004118c0 ==== 
 * signature: int __thiscall FUN_004118c0(void * this, int param_1, int param_2)
 * body: 004118c0-00411954
 */

int __thiscall FUN_004118c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)this == 0) {
      return 0;
    }
    iVar1 = FUN_00411990(this,*(int *)this,param_2);
    FUN_004119c0(this,*(int *)this,param_2);
    local_8 = 1;
    do {
      if (param_1 == iVar1) {
        return local_8;
      }
      iVar2 = FUN_004116c0(this,iVar1);
      iVar1 = FUN_00411990(this,iVar2,param_2);
      if ((*(int *)((int)this + 4) == iVar2) && (param_1 != iVar1)) {
        return 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 != 0);
  }
  return local_8;
}


