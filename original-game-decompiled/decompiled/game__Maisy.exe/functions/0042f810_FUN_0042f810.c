
/* ==== FUN_0042f810 @ 0042f810 ==== 
 * signature: undefined4 __cdecl FUN_0042f810(undefined4 param_1, int * param_2, char * param_3, char * param_4)
 * body: 0042f810-0042f82c
 */

undefined4 __cdecl FUN_0042f810(undefined4 param_1,int *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  iVar1 = _strcoll(param_3,param_4);
  *param_2 = iVar1;
  return 0;
}


