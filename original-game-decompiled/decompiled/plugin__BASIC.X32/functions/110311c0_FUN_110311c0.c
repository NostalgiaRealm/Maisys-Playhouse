
/* ==== FUN_110311c0 @ 110311c0 ==== 
 * signature: undefined FUN_110311c0(void)
 * body: 110311c0-110311ee
 */

char * FUN_110311c0(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_11031160(param_1,param_2,param_3,iVar1);
  return param_2;
}


