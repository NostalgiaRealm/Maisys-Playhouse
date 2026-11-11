
/* ==== FUN_14020770 @ 14020770 ==== 
 * signature: char * __cdecl FUN_14020770(uint param_1, char * param_2, uint param_3)
 * body: 14020770-1402079e
 */

char * __cdecl FUN_14020770(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_14020710(param_1,param_2,param_3,iVar1);
  return param_2;
}


