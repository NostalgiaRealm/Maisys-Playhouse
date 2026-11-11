
/* ==== FUN_0042f5b0 @ 0042f5b0 ==== 
 * signature: undefined4 __cdecl FUN_0042f5b0(undefined4 param_1, size_t * param_2, char * param_3, char * param_4)
 * body: 0042f5b0-0042f5cc
 */

undefined4 __cdecl FUN_0042f5b0(undefined4 param_1,size_t *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  
  sVar1 = _strspn(param_3,param_4);
  *param_2 = sVar1;
  return 0;
}


