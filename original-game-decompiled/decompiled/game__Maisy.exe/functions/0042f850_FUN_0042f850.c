
/* ==== FUN_0042f850 @ 0042f850 ==== 
 * signature: undefined4 __cdecl FUN_0042f850(undefined4 param_1, size_t * param_2, char * param_3, char * param_4, size_t param_5)
 * body: 0042f850-0042f870
 */

undefined4 __cdecl
FUN_0042f850(undefined4 param_1,size_t *param_2,char *param_3,char *param_4,size_t param_5)

{
  size_t sVar1;
  
  sVar1 = _strxfrm(param_3,param_4,param_5);
  *param_2 = sVar1;
  return 0;
}


