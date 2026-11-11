
/* ==== FUN_004b373c @ 004b373c ==== 
 * signature: undefined __fastcall FUN_004b373c(int * param_1)
 * body: 004b373c-004b3772
 */

void __fastcall FUN_004b373c(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int local_8;
  
  iVar1 = *param_1;
  local_8 = (**(code **)(iVar1 + 0x58))();
  if (local_8 != 0) {
    pcVar2 = *(code **)(iVar1 + 0x5c);
    do {
      piVar3 = (int *)(*pcVar2)(&local_8);
      (**(code **)(*piVar3 + 0xb0))();
    } while (local_8 != 0);
  }
  return;
}


