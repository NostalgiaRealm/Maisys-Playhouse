
/* ==== FUN_00414190 @ 00414190 ==== 
 * signature: undefined4 __thiscall FUN_00414190(void * this, int param_1)
 * body: 00414190-004141f6
 */

undefined4 __thiscall FUN_00414190(void *this,int param_1)

{
  undefined4 *local_c;
  short local_6;
  
  FUN_00430370(*(void **)((int)this + 8),param_1,&local_6);
  if (local_6 == -1) {
    return 0;
  }
  local_6 = local_6 + 1;
  FUN_0042ff10(*(void **)((int)this + 8),param_1,&local_6);
  FUN_00430370(*(void **)((int)this + 4),param_1,&local_c);
  if (local_6 == 1) {
    LocalLock(local_c);
  }
  return *local_c;
}


