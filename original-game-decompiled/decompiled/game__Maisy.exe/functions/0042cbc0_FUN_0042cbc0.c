
/* ==== FUN_0042cbc0 @ 0042cbc0 ==== 
 * signature: int __fastcall FUN_0042cbc0(int * param_1)
 * body: 0042cbc0-0042cbfc
 */

int __fastcall FUN_0042cbc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    for (piVar1 = (int *)(**(code **)(*piVar1 + 0x188))(); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
      iVar2 = iVar2 + 1;
      if (param_1 == piVar1) {
        return iVar2;
      }
    }
  }
  return 0;
}


