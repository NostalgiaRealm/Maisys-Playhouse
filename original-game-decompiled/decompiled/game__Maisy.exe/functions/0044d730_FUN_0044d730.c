
/* ==== FUN_0044d730 @ 0044d730 ==== 
 * signature: undefined __fastcall FUN_0044d730(int param_1)
 * body: 0044d730-0044d7b6
 */

void __fastcall FUN_0044d730(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = FUN_0044e340(param_1);
  piVar2 = (int *)FUN_00430190(*(int *)(param_1 + 0x30));
  if (0 < local_10) {
    do {
      local_8 = (int *)0x0;
      piVar4 = (int *)*piVar2;
      while (piVar4 != (int *)0x0) {
        piVar1 = *(int **)((int)piVar4 + 0x26);
        iVar3 = FUN_0040da40((int)piVar4);
        piVar5 = piVar4;
        if (iVar3 == 0) {
          if ((int *)*piVar2 == piVar4) {
            *piVar2 = (int)piVar1;
          }
          else if (local_8 != (int *)0x0) {
            FUN_0040d490(local_8,piVar1);
          }
          piVar5 = (int *)0x0;
          (**(code **)(*piVar4 + 4))();
        }
        piVar4 = piVar1;
        if (piVar5 != (int *)0x0) {
          local_8 = piVar5;
        }
      }
      piVar2 = (int *)((int)piVar2 + 0x1a);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_004301f0(*(int *)(param_1 + 0x30));
  return;
}


