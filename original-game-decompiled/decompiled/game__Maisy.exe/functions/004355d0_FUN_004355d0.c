
/* ==== FUN_004355d0 @ 004355d0 ==== 
 * signature: undefined4 __thiscall FUN_004355d0(void * this, int param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * body: 004355d0-00435659
 */

undefined4 __thiscall
FUN_004355d0(void *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0x724c);
  }
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x26);
  iVar3 = FUN_00430190(param_1);
  if (0 < iVar1) {
    piVar4 = (int *)(iVar3 + 4);
    do {
      bVar2 = FUN_00437430(piVar4,param_2);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        *param_5 = *(undefined4 *)(iVar3 + 0x26 + iVar5 * 0x2a);
        FUN_004301f0(param_1);
        return 0;
      }
      piVar4 = (int *)((int)piVar4 + 0x2a);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  FUN_004301f0(param_1);
  return 0x10000;
}


