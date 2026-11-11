
/* ==== FUN_00422620 @ 00422620 ==== 
 * signature: undefined1 __thiscall FUN_00422620(void * this, int param_1, int * param_2, int * param_3)
 * body: 00422620-0042268e
 */

undefined1 __thiscall FUN_00422620(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar1 = *(int *)((int)this + 0x1d2);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x26), iVar2 != 0)) {
    iVar6 = 0;
    piVar3 = (int *)FUN_00430190(iVar1);
    piVar4 = piVar3;
    if (0 < iVar2) {
      do {
        if (*piVar4 == param_1) {
          uVar5 = 1;
          *param_2 = piVar3[iVar6 * 3 + 1];
          *param_3 = piVar3[iVar6 * 3 + 2];
          break;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar6 < iVar2);
    }
    FUN_004301f0(*(int *)((int)this + 0x1d2));
  }
  return uVar5;
}


