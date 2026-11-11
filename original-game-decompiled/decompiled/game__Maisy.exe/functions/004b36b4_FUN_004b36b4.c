
/* ==== FUN_004b36b4 @ 004b36b4 ==== 
 * signature: undefined4 __fastcall FUN_004b36b4(int * param_1)
 * body: 004b36b4-004b36f1
 */

undefined4 __fastcall FUN_004b36b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_4;
  
  iVar1 = *param_1;
  iStack_4 = (**(code **)(iVar1 + 0x58))();
  do {
    if (iStack_4 == 0) {
      return 1;
    }
    piVar2 = (int *)(**(code **)(iVar1 + 0x5c))(&iStack_4);
    iVar3 = (**(code **)(*piVar2 + 0x94))();
  } while (iVar3 != 0);
  return 0;
}


