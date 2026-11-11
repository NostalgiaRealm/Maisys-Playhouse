
/* ==== FUN_0044ce80 @ 0044ce80 ==== 
 * signature: undefined __fastcall FUN_0044ce80(int * param_1)
 * body: 0044ce80-0044cf0e
 */

void __fastcall FUN_0044ce80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0xc] != 0) {
    iVar1 = FUN_0044e340((int)param_1);
    piVar2 = (int *)FUN_00430190(param_1[0xc]);
    if (0 < iVar1) {
      do {
        if (piVar2[4] != 0x68) {
          if ((int *)*piVar2 != (int *)0x0) {
            (**(code **)(*(int *)*piVar2 + 4))();
          }
          if ((LPVOID)piVar2[3] != (LPVOID)0x0) {
            FUN_0043ba20((LPVOID)piVar2[3]);
          }
        }
        piVar2 = (int *)((int)piVar2 + 0x1a);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004301f0(param_1[0xc]);
    (**(code **)(*(int *)param_1[0xc] + 4))();
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    FUN_00430540((undefined4 *)param_1[0x18]);
  }
  param_1[0x18] = 0;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  param_1[0xd] = 0;
  FUN_00412db0(param_1);
  return;
}


