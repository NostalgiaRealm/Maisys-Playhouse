
/* ==== FUN_004537b0 @ 004537b0 ==== 
 * signature: undefined __cdecl FUN_004537b0(short * param_1, int * param_2)
 * body: 004537b0-004537ef
 */

void __cdecl FUN_004537b0(short *param_1,int *param_2)

{
  int *piVar1;
  
  if ((((*param_1 != 0x69) && (*param_1 == 0x73)) && (*(int *)(param_1 + 1) == 0)) &&
     ((param_2 != (int *)0x0 && ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0)))) {
    piVar1 = FUN_0043ea50(param_2,(int *)(param_1 + 3),*(char **)(param_1 + 5));
    *(int **)(param_1 + 1) = piVar1;
  }
  return;
}


