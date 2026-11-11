
/* ==== FUN_140206d0 @ 140206d0 ==== 
 * signature: char * __cdecl FUN_140206d0(uint param_1, char * param_2, uint param_3)
 * body: 140206d0-1402070b
 */

char * __cdecl FUN_140206d0(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_14020710(param_1,param_2,10,1);
    return param_2;
  }
  FUN_14020710(param_1,param_2,param_3,0);
  return param_2;
}


