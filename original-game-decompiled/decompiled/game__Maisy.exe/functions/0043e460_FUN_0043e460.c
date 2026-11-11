
/* ==== FUN_0043e460 @ 0043e460 ==== 
 * signature: int * __cdecl FUN_0043e460(int * param_1, int param_2)
 * body: 0043e460-0043e4a2
 */

int * __cdecl FUN_0043e460(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)(**(code **)(iVar1 + 0x184))();
  if (param_2 == 0) {
    piVar2 = (int *)(**(code **)(iVar1 + 0x18c))();
    return piVar2;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if (piVar2[3] == param_2) break;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x17c))();
  }
  return piVar2;
}


