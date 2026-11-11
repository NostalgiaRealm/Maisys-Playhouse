
/* ==== FUN_004b43f8 @ 004b43f8 ==== 
 * signature: undefined __thiscall FUN_004b43f8(void * this, int param_1)
 * body: 004b43f8-004b4453
 */

void __thiscall FUN_004b43f8(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  HCURSOR pHVar3;
  
  piVar1 = (int *)((int)this + 0x98);
  AfxLockGlobals(2);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + param_1;
  if (iVar2 + param_1 < 1) {
    *piVar1 = 0;
    SetCursor(*(HCURSOR *)((int)this + 0x9c));
  }
  else {
    pHVar3 = SetCursor(DAT_004e51d8);
    if ((0 < param_1) && (*piVar1 == 1)) {
      *(HCURSOR *)((int)this + 0x9c) = pHVar3;
    }
  }
  AfxUnlockGlobals(2);
  return;
}


