
/* ==== FUN_100046a0 @ 100046a0 ==== 
 * signature: undefined __cdecl FUN_100046a0(int param_1, int * param_2, double * param_3, double * param_4)
 * body: 100046a0-1000471a
 */

void __cdecl FUN_100046a0(int param_1,int *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(param_2[2] - *param_2) / ((double)*(int *)(param_1 + 4) * *param_3);
  dVar2 = (double)(param_2[3] - param_2[1]) / ((double)*(int *)(param_1 + 8) * *param_4);
  if (dVar1 < dVar2) {
    dVar2 = dVar1;
  }
  *param_3 = *param_3 * dVar2;
  *param_4 = *param_4 * dVar2;
  return;
}


