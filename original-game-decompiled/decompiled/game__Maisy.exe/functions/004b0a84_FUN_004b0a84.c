
/* ==== FUN_004b0a84 @ 004b0a84 ==== 
 * signature: undefined4 __stdcall FUN_004b0a84(int * param_1)
 * body: 004b0a84-004b0a9e
 */

int FUN_004b0a84(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    iVar2 = piVar1[2];
  }
  return iVar2;
}


