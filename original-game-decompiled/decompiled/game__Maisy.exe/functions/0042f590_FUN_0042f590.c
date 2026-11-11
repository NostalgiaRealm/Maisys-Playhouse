
/* ==== FUN_0042f590 @ 0042f590 ==== 
 * signature: undefined4 __cdecl FUN_0042f590(undefined4 param_1, undefined4 * param_2, char * param_3, int param_4)
 * body: 0042f590-0042f5ac
 */

undefined4 __cdecl FUN_0042f590(undefined4 param_1,undefined4 *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_3,param_4);
  *param_2 = pcVar1;
  return 0;
}


