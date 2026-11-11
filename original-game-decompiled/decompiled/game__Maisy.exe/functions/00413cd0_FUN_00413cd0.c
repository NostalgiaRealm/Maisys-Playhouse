
/* ==== FUN_00413cd0 @ 00413cd0 ==== 
 * signature: undefined4 __thiscall FUN_00413cd0(void * this, int param_1)
 * body: 00413cd0-00413d27
 */

undefined4 __thiscall FUN_00413cd0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *local_c;
  int local_8;
  
  iVar2 = 1;
  local_8 = FUN_00414260((int)this);
  if (0 < local_8) {
    do {
      FUN_00430370(*(void **)((int)this + 4),iVar2,&local_c);
      if (*(int *)(*local_c + 10) == param_1) {
        uVar1 = FUN_00414190(this,iVar2);
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_8);
  }
  return 0;
}


