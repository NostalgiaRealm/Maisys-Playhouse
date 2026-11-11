
/* ==== FUN_004a0ec0 @ 004a0ec0 ==== 
 * signature: char * __cdecl FUN_004a0ec0(uint param_1, char * param_2, uint param_3)
 * body: 004a0ec0-004a0efb
 */

char * __cdecl FUN_004a0ec0(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_004a0f00(param_1,param_2,10,1);
    return param_2;
  }
  FUN_004a0f00(param_1,param_2,param_3,0);
  return param_2;
}


