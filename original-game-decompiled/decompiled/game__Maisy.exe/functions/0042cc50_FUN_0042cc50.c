
/* ==== FUN_0042cc50 @ 0042cc50 ==== 
 * signature: undefined4 __thiscall FUN_0042cc50(void * this, int param_1)
 * body: 0042cc50-0042cd1d
 */

undefined4 __thiscall FUN_0042cc50(void *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined3 unaff_EBP;
  undefined4 uStack_8;
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x16c))();
  iVar3 = (**(code **)(*(int *)this + 0x1a0))();
  cVar5 = '\x01' - ((*(uint *)((int)this + 0x26) & 0x10000000) == 0);
  uStack_8 = (int *)CONCAT13(cVar5,(undefined3)uStack_8);
  if (piVar2 == (int *)0x0) goto LAB_0042cd05;
  if (param_1 < 1) {
    if (iVar3 == 1) {
      return 0;
    }
  }
  else {
    if (param_1 == iVar3) {
      return 0;
    }
    if (param_1 < iVar3) {
      param_1 = param_1 + -1;
    }
    if (param_1 == 0) {
LAB_0042ccdd:
      if (uStack_8 == (int *)0x0) goto LAB_0042ccf7;
    }
    else {
      pcVar1 = *(code **)(*piVar2 + 0x194);
      uStack_8 = (int *)(*pcVar1)(param_1);
      if (uStack_8 == (int *)0x0) {
        uVar4 = (**(code **)(*piVar2 + 0x1c0))();
        uStack_8 = (int *)(*pcVar1)(uVar4);
        goto LAB_0042ccdd;
      }
    }
    if (param_1 != 0) {
      if (this != uStack_8) {
        FUN_0043dc60(this,uStack_8,'\0');
      }
      goto LAB_0042cd05;
    }
  }
LAB_0042ccf7:
  FUN_0043de50(this,piVar2,'\0',0);
LAB_0042cd05:
  (**(code **)(*(int *)this + 0x120))(CONCAT31(unaff_EBP,cVar5));
  return 0;
}


