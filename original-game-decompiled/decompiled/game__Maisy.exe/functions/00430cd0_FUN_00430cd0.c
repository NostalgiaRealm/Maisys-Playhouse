
/* ==== FUN_00430cd0 @ 00430cd0 ==== 
 * signature: int __thiscall FUN_00430cd0(void * this, int param_1)
 * body: 00430cd0-00430d1d
 */

int __thiscall FUN_00430cd0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00430190((int)this);
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      iVar1 = iVar3 + 1;
      piVar2 = (int *)FUN_004301c0(this,iVar1);
      if (*piVar2 == param_1) {
        FUN_004301f0((int)this);
        return iVar3 + 1;
      }
      iVar3 = iVar1;
    } while (iVar1 < *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return 0;
}


