
/* ==== FUN_0049bbf0 @ 0049bbf0 ==== 
 * signature: int __stdcall FUN_0049bbf0(int * param_1)
 * body: 0049bbf0-0049bc47
 */

int FUN_0049bbf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    terminate();
    return 1;
  }
  if (DAT_004e5664 != (_func_int *)0x0) {
    iVar2 = _ValidateExecute(DAT_004e5664);
    if (iVar2 != 0) {
      iVar2 = (*DAT_004e5664)(param_1);
      return iVar2;
    }
  }
  return 0;
}


