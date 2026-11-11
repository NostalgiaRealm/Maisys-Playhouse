
/* ==== FUN_12031800 @ 12031800 ==== 
 * signature: undefined FUN_12031800(void)
 * body: 12031800-1203182e
 */

char * FUN_12031800(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_120317a0(param_1,param_2,param_3,iVar1);
  return param_2;
}


