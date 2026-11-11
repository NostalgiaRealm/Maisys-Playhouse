
/* ==== FUN_00411170 @ 00411170 ==== 
 * signature: undefined __fastcall FUN_00411170(int * param_1)
 * body: 00411170-0041119e
 */

void __fastcall FUN_00411170(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x114))();
  (**(code **)(iVar1 + 0x1e8))();
  cVar2 = (**(code **)(iVar1 + 0xec))();
  if (cVar2 == '\0') {
    *(undefined4 *)((int)param_1 + 0x82) = 0;
  }
  return;
}


