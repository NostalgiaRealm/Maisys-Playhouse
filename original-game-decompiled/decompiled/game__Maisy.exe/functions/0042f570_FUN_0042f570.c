
/* ==== FUN_0042f570 @ 0042f570 ==== 
 * signature: undefined4 __cdecl FUN_0042f570(undefined4 param_1, undefined4 * param_2, char * param_3, int param_4)
 * body: 0042f570-0042f58c
 */

undefined4 __cdecl FUN_0042f570(undefined4 param_1,undefined4 *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = _strchr(param_3,param_4);
  *param_2 = pcVar1;
  return 0;
}


