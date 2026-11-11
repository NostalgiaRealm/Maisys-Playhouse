
/* ==== FUN_0046de70 @ 0046de70 ==== 
 * signature: int * __fastcall FUN_0046de70(int * param_1)
 * body: 0046de70-0046deac
 */

int * __fastcall FUN_0046de70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  piVar3 = (int *)(**(code **)(iVar1 + 0x178))();
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(**(code **)(iVar1 + 0x16c))();
    piVar4 = (int *)(**(code **)(*piVar3 + 0x188))();
    piVar3 = piVar4;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x174))();
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


