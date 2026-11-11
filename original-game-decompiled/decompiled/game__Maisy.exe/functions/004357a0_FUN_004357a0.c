
/* ==== FUN_004357a0 @ 004357a0 ==== 
 * signature: undefined4 __thiscall FUN_004357a0(void * this, int param_1, int param_2, undefined4 * param_3)
 * body: 004357a0-00435826
 */

undefined4 __thiscall FUN_004357a0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int local_20 [6];
  int local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x10000;
  }
  iVar1 = 1;
  if (0 < *(int *)(*(int *)((int)this + 0x7250) + 0x26)) {
    do {
      FUN_00430370(*(void **)((int)this + 0x7250),iVar1,local_20);
      if ((param_1 == local_20[0]) && (param_2 == local_8)) {
        lVar2 = __ftol();
        *param_3 = (int)lVar2;
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(*(int *)((int)this + 0x7250) + 0x26));
  }
  return 0x10000;
}


