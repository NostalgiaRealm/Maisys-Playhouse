
/* ==== FUN_5f001300 @ 5f001300 ==== 
 * signature: undefined __cdecl FUN_5f001300(HDC param_1, int * param_2)
 * body: 5f001300-5f001329
 */

void __cdecl FUN_5f001300(HDC param_1,int *param_2)

{
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xf00021);
  return;
}


