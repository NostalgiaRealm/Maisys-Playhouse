
/* ==== FUN_1202c0e0 @ 1202c0e0 ==== 
 * signature: int __stdcall FUN_1202c0e0(int * param_1)
 * body: 1202c0e0-1202c137
 */

int FUN_1202c0e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    terminate();
    return 1;
  }
  if (DAT_1203996c != (_func_int *)0x0) {
    iVar2 = _ValidateExecute(DAT_1203996c);
    if (iVar2 != 0) {
      iVar2 = (*DAT_1203996c)(param_1);
      return iVar2;
    }
  }
  return 0;
}


