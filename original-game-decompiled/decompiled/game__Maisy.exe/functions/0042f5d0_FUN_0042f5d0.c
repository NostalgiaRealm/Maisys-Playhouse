
/* ==== FUN_0042f5d0 @ 0042f5d0 ==== 
 * signature: undefined4 __cdecl FUN_0042f5d0(undefined4 param_1, size_t * param_2, char * param_3, char * param_4)
 * body: 0042f5d0-0042f5ec
 */

undefined4 __cdecl FUN_0042f5d0(undefined4 param_1,size_t *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  
  sVar1 = _strcspn(param_3,param_4);
  *param_2 = sVar1;
  return 0;
}


