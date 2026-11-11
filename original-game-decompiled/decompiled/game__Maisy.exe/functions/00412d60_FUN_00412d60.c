
/* ==== FUN_00412d60 @ 00412d60 ==== 
 * signature: undefined __thiscall FUN_00412d60(void * this, int param_1)
 * body: 00412d60-00412da3
 */

void __thiscall FUN_00412d60(void *this,int param_1)

{
  DWORD DVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = param_1;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    return;
  }
  DVar1 = timeGetTime();
  iVar2 = FUN_0043c420();
  *(uint *)((int)this + 8) = (DVar1 * 6) / 100 + iVar2;
  return;
}


