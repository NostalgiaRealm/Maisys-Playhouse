
/* ==== FUN_0043e4b0 @ 0043e4b0 ==== 
 * signature: int * __cdecl FUN_0043e4b0(int * param_1, int param_2, int * param_3)
 * body: 0043e4b0-0043e50d
 */

int * __cdecl FUN_0043e4b0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x184))();
  *param_3 = 0;
  if (param_2 == 0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x18c))();
    *param_3 = 1;
    return piVar1;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      *param_3 = 0;
      return (int *)0x0;
    }
    *param_3 = *param_3 + 1;
    if (piVar1[3] == param_2) break;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))();
  }
  return piVar1;
}


