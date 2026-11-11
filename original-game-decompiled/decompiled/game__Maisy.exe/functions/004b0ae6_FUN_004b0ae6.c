
/* ==== FUN_004b0ae6 @ 004b0ae6 ==== 
 * signature: undefined __fastcall FUN_004b0ae6(int * param_1)
 * body: 004b0ae6-004b0b1c
 */

void __fastcall FUN_004b0ae6(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int local_8;
  
  iVar1 = *param_1;
  local_8 = (**(code **)(iVar1 + 100))();
  if (local_8 != 0) {
    pcVar2 = *(code **)(iVar1 + 0x68);
    do {
      piVar3 = (int *)(*pcVar2)(&local_8);
      (**(code **)(*piVar3 + 0xe4))();
    } while (local_8 != 0);
  }
  return;
}


