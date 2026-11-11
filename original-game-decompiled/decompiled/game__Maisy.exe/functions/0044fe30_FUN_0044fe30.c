
/* ==== FUN_0044fe30 @ 0044fe30 ==== 
 * signature: undefined __fastcall FUN_0044fe30(int * param_1)
 * body: 0044fe30-0044fe99
 */

void __fastcall FUN_0044fe30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x26);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x26);
    piVar2 = (int *)FUN_00430190(iVar1);
    if (0 < iVar3) {
      do {
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 8))(1,0);
          *piVar2 = 0;
        }
        if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
          FUN_00430540((undefined4 *)piVar2[2]);
          piVar2[2] = 0;
        }
        piVar2 = piVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004301f0(*(int *)((int)param_1 + 0x26));
    (**(code **)(**(int **)((int)param_1 + 0x26) + 4))();
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  FUN_00412db0(param_1);
  return;
}


