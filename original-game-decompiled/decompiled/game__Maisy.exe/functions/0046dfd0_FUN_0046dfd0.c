
/* ==== FUN_0046dfd0 @ 0046dfd0 ==== 
 * signature: int __fastcall FUN_0046dfd0(int * param_1)
 * body: 0046dfd0-0046e00c
 */

int __fastcall FUN_0046dfd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    for (piVar1 = (int *)(**(code **)(*piVar1 + 0x18c))(); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
      iVar2 = iVar2 + 1;
      if (piVar1 == param_1) {
        return iVar2;
      }
    }
  }
  return 0;
}


