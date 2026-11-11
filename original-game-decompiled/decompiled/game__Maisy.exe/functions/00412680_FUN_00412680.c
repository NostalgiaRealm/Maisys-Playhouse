
/* ==== FUN_00412680 @ 00412680 ==== 
 * signature: undefined1 __fastcall FUN_00412680(int * param_1)
 * body: 00412680-004126cd
 */

undefined1 __fastcall FUN_00412680(int *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  
  bVar2 = FUN_00412e60((int)param_1);
  if (bVar2 != 0) {
    return 1;
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x188))();
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar4;
    cVar3 = (**(code **)(iVar1 + 0x200))();
    if (cVar3 != '\0') break;
    piVar4 = (int *)(**(code **)(iVar1 + 0x174))();
  }
  return 1;
}


