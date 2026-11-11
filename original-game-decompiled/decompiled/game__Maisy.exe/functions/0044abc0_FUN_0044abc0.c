
/* ==== FUN_0044abc0 @ 0044abc0 ==== 
 * signature: undefined4 __thiscall FUN_0044abc0(void * this, int param_1)
 * body: 0044abc0-0044ac13
 */

undefined4 __thiscall FUN_0044abc0(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  bVar1 = false;
  iVar3 = 1;
  local_8 = 0;
  FUN_00430190((int)this);
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      if (bVar1) break;
      iVar2 = FUN_004301c0(this,iVar3);
      if (*(int *)(iVar2 + 8) == param_1) {
        local_8 = *(undefined4 *)(iVar2 + 4);
        bVar1 = true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return local_8;
}


