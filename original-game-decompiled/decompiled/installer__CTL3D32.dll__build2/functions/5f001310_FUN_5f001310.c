
/* ==== FUN_5f001310 @ 5f001310 ==== 
 * signature: undefined __cdecl FUN_5f001310(HDC param_1, int * param_2)
 * body: 5f001310-5f001339
 */

void __cdecl FUN_5f001310(HDC param_1,int *param_2)

{
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xf00021);
  return;
}


