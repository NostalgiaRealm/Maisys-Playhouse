
/* ==== FUN_004354b0 @ 004354b0 ==== 
 * signature: undefined4 __thiscall FUN_004354b0(void * this, void * param_1, int param_2)
 * body: 004354b0-00435517
 */

undefined4 __thiscall FUN_004354b0(void *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (void *)0x0) {
    param_1 = *(void **)((int)this + 0x724c);
  }
  iVar5 = -1;
  iVar1 = *(int *)((int)param_1 + 0x26);
  iVar2 = FUN_00430190((int)param_1);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(iVar2 + 0x26);
    do {
      if (*piVar3 == param_2) {
        iVar5 = iVar4 + 1;
        break;
      }
      piVar3 = (int *)((int)piVar3 + 0x2a);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_004301f0((int)param_1);
  if (iVar5 == -1) {
    return 0x10000;
  }
  FUN_00430090(param_1,iVar5);
  return 0;
}


