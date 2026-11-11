
/* ==== FUN_00414200 @ 00414200 ==== 
 * signature: undefined __thiscall FUN_00414200(void * this, int param_1)
 * body: 00414200-00414257
 */

void __thiscall FUN_00414200(void *this,int param_1)

{
  HLOCAL local_c;
  short local_6;
  
  FUN_00430370(*(void **)((int)this + 8),param_1,&local_6);
  if (local_6 != -1) {
    local_6 = local_6 + -1;
    FUN_0042ff10(*(void **)((int)this + 8),param_1,&local_6);
    if (local_6 == 0) {
      FUN_00430370(*(void **)((int)this + 4),param_1,&local_c);
      LocalUnlock(local_c);
    }
  }
  return;
}


