
/* ==== FUN_004a0f60 @ 004a0f60 ==== 
 * signature: char * __cdecl FUN_004a0f60(uint param_1, char * param_2, uint param_3)
 * body: 004a0f60-004a0f8e
 */

char * __cdecl FUN_004a0f60(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_004a0f00(param_1,param_2,param_3,iVar1);
  return param_2;
}


