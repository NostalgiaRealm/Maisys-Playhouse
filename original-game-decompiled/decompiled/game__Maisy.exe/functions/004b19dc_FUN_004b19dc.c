
/* ==== FUN_004b19dc @ 004b19dc ==== 
 * signature: undefined4 __thiscall FUN_004b19dc(void * this, int param_1)
 * body: 004b19dc-004b1a3f
 */

undefined4 __thiscall FUN_004b19dc(void *this,int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  HRGN hrgn;
  int iVar4;
  
  piVar1 = (int *)((int)this + 4);
  BVar2 = SelectClipPath((HDC)*piVar1,param_1);
  if (BVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (*piVar1 != *(int *)((int)this + 8)) {
      hrgn = CreateRectRgn(0,0,0,0);
      iVar4 = GetClipRgn((HDC)*piVar1,hrgn);
      if ((iVar4 < 0) || (iVar4 = SelectClipRgn(*(HDC *)((int)this + 8),hrgn), iVar4 == 0)) {
        uVar3 = 0;
      }
      DeleteObject(hrgn);
    }
  }
  return uVar3;
}


