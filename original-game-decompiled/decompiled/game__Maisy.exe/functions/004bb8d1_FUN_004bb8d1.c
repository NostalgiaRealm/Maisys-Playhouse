
/* ==== FUN_004bb8d1 @ 004bb8d1 ==== 
 * signature: undefined4 __thiscall FUN_004bb8d1(void * this, int param_1)
 * body: 004bb8d1-004bb91d
 */

undefined4 __thiscall FUN_004bb8d1(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == iVar2) {
    *(undefined4 *)this = *(undefined4 *)(*(int *)((int)this + 4) + param_1);
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    do {
      iVar1 = *(int *)(*(int *)((int)this + 4) + iVar2);
      if (param_1 == iVar1) break;
      iVar2 = iVar1;
    } while (iVar1 != 0);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)((int)this + 4) + iVar2) =
         *(undefined4 *)(*(int *)((int)this + 4) + param_1);
  }
  return 1;
}


