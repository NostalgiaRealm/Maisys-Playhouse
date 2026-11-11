
/* ==== FUN_00483530 @ 00483530 ==== 
 * signature: undefined4 __cdecl FUN_00483530(undefined4 param_1, short * param_2, int * param_3, int * param_4, int param_5)
 * body: 00483530-004835a1
 */

undefined4 __cdecl
FUN_00483530(undefined4 param_1,short *param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  
  if ((*(byte *)((int)param_3 + 0x1e) & 0x10) == 0) {
    return 0x10000;
  }
  piVar1 = (int *)0x0;
  if (*param_2 == 0x73) {
    piVar1 = FUN_0043ea50(param_3,(int *)(param_2 + 3),*(char **)(param_2 + 5));
    *(int **)(param_2 + 1) = piVar1;
    if (param_5 != 0) {
      FUN_0048b370(param_5,0x4d9e88);
    }
  }
  if (param_4 != (int *)0x0) {
    if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x21) & 0x20) != 0)) {
      *param_4 = piVar1[0x14];
      return 0;
    }
    *param_4 = (int)piVar1;
  }
  return 0;
}


