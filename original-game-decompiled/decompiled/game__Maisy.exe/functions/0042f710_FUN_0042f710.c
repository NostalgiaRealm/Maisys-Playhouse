
/* ==== FUN_0042f710 @ 0042f710 ==== 
 * signature: undefined4 __cdecl FUN_0042f710(undefined4 param_1, undefined4 * param_2, char * param_3, char * param_4)
 * body: 0042f710-0042f72c
 */

undefined4 __cdecl FUN_0042f710(undefined4 param_1,undefined4 *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = _strtok(param_3,param_4);
  *param_2 = pcVar1;
  return 0;
}


