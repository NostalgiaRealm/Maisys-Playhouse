
/* ==== FUN_00405f90 @ 00405f90 ==== 
 * signature: undefined __fastcall FUN_00405f90(int * param_1)
 * body: 00405f90-00405ffe
 */

void __fastcall FUN_00405f90(int *param_1)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int **)((int)param_1 + 0x9e) != (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0xa9) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x9e) + 0x2d8))();
    sVar2 = *(short *)(*(int *)((int)param_1 + 0x32) + 0x26);
    iVar4 = FUN_00430190(*(int *)((int)param_1 + 0x32));
    while (sVar2 = sVar2 + -1, -1 < sVar2) {
      piVar1 = (int *)(iVar4 + sVar2 * 10);
      piVar3 = (int *)*piVar1;
      if ((piVar3 != (int *)0x0) && ((char)piVar1[2] != '\0')) {
        (**(code **)(*piVar3 + 0x2d8))();
      }
    }
    FUN_004301f0(*(int *)((int)param_1 + 0x32));
    FUN_00405f30((int)param_1);
    return;
  }
  FUN_00405e90(param_1);
  return;
}


