
/* ==== FUN_0042f830 @ 0042f830 ==== 
 * signature: undefined4 __cdecl FUN_0042f830(undefined4 param_1, undefined4 * param_2, char * param_3)
 * body: 0042f830-0042f848
 */

undefined4 __cdecl FUN_0042f830(undefined4 param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = _strerror(param_3);
  *param_2 = pcVar1;
  return 0;
}


