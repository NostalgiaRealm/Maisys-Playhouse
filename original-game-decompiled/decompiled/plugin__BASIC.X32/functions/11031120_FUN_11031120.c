
/* ==== FUN_11031120 @ 11031120 ==== 
 * signature: char * __cdecl FUN_11031120(uint param_1, char * param_2, uint param_3)
 * body: 11031120-1103115b
 */

char * __cdecl FUN_11031120(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_11031160(param_1,param_2,10,1);
    return param_2;
  }
  FUN_11031160(param_1,param_2,param_3,0);
  return param_2;
}


