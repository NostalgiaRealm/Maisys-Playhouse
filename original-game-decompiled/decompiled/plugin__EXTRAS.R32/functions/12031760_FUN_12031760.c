
/* ==== FUN_12031760 @ 12031760 ==== 
 * signature: char * __cdecl FUN_12031760(uint param_1, char * param_2, uint param_3)
 * body: 12031760-1203179b
 */

char * __cdecl FUN_12031760(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_120317a0(param_1,param_2,10,1);
    return param_2;
  }
  FUN_120317a0(param_1,param_2,param_3,0);
  return param_2;
}


