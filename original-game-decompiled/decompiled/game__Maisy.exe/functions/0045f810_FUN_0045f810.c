
/* ==== FUN_0045f810 @ 0045f810 ==== 
 * signature: undefined __thiscall FUN_0045f810(void * this, int * param_1)
 * body: 0045f810-0045f87a
 */

void __thiscall FUN_0045f810(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_004b7c69(this,param_1);
  if ((DAT_004dc1c4 != '\0') && (this != param_1)) {
    iVar1 = *(int *)((int)this + 0xc4);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 0x2a);
    }
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1)) {
      iVar1 = FUN_00410600(iVar1);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x43) & 2) != 0)) {
        iVar1 = FUN_004319e0(iVar1);
        iVar1 = FUN_004084c0(iVar1);
        FUN_0047ac50(iVar1);
      }
      (**(code **)(*piVar2 + 0x120))();
    }
  }
  return;
}


