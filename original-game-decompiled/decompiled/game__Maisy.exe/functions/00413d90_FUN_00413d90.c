
/* ==== FUN_00413d90 @ 00413d90 ==== 
 * signature: undefined __thiscall FUN_00413d90(void * this, int param_1)
 * body: 00413d90-00413de5
 */

void __thiscall FUN_00413d90(void *this,int param_1)

{
  int iVar1;
  int *local_c;
  int local_8;
  
  iVar1 = 1;
  local_8 = FUN_00414260((int)this);
  if (0 < local_8) {
    while (FUN_00430370(*(void **)((int)this + 4),iVar1,&local_c),
          *(int *)(*local_c + 10) != param_1) {
      iVar1 = iVar1 + 1;
      if (local_8 < iVar1) {
        return;
      }
    }
    FUN_00414200(this,iVar1);
  }
  return;
}


