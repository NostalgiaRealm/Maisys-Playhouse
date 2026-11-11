
/* ==== FUN_0043eae0 @ 0043eae0 ==== 
 * signature: int * __cdecl FUN_0043eae0(int param_1, int param_2)
 * body: 0043eae0-0043eb51
 */

int * __cdecl FUN_0043eae0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x3a);
  if (piVar2 != (int *)0x0) {
    if ((piVar2[3] == param_2) && ((*(byte *)((int)piVar2 + 0x29) & 0x80) == 0)) {
      return piVar2;
    }
    if (*(int **)((int)piVar2 + 0x62) != (int *)0x0) {
      for (piVar1 = (int *)FUN_00469fb0(*(int **)((int)piVar2 + 0x62)); piVar1 != (int *)0x0;
          piVar1 = *(int **)((int)piVar1 + 0x6a)) {
        if ((piVar1[3] == param_2) && ((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0)) {
          return piVar1;
        }
      }
      for (piVar2 = *(int **)((int)piVar2 + 0x62); piVar2 != (int *)0x0;
          piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))()) {
        if ((piVar2[3] == param_2) && ((*(uint *)((int)piVar2 + 0x26) & 0x80000000) == 0)) {
          return piVar2;
        }
      }
    }
  }
  return (int *)0x0;
}


