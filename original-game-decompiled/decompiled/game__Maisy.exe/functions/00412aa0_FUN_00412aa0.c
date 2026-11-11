
/* ==== FUN_00412aa0 @ 00412aa0 ==== 
 * signature: undefined __fastcall FUN_00412aa0(int * param_1)
 * body: 00412aa0-00412ac8
 */

void __fastcall FUN_00412aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x174))();
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(iVar1 + 0x16c))();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x18c))();
    }
  }
  return;
}


