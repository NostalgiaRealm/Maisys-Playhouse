
/* ==== FUN_00413d30 @ 00413d30 ==== 
 * signature: undefined __thiscall FUN_00413d30(void * this, int param_1)
 * body: 00413d30-00413d88
 */

void __thiscall FUN_00413d30(void *this,int param_1)

{
  int iVar1;
  int *local_c;
  int local_8;
  
  local_8 = FUN_00414260((int)this);
  if ((*(int *)(param_1 + 10) != -1) && (iVar1 = 1, 0 < local_8)) {
    while( true ) {
      FUN_00430370(*(void **)((int)this + 4),iVar1,&local_c);
      if (*local_c == param_1) break;
      iVar1 = iVar1 + 1;
      if (local_8 < iVar1) {
        return;
      }
    }
    FUN_00414200(this,iVar1);
  }
  return;
}


