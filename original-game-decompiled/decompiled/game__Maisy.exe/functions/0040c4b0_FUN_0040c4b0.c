
/* ==== FUN_0040c4b0 @ 0040c4b0 ==== 
 * signature: int __fastcall FUN_0040c4b0(int * param_1)
 * body: 0040c4b0-0040c4ec
 */

int __fastcall FUN_0040c4b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    for (piVar1 = (int *)(**(code **)(*piVar1 + 0x184))(); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))()) {
      iVar2 = iVar2 + 1;
      if (piVar1 == param_1) {
        return iVar2;
      }
    }
  }
  return 0;
}


