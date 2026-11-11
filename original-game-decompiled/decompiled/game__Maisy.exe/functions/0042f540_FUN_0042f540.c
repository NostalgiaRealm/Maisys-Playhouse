
/* ==== FUN_0042f540 @ 0042f540 ==== 
 * signature: undefined4 __cdecl FUN_0042f540(undefined4 param_1, int * param_2, char * param_3, char * param_4, size_t param_5)
 * body: 0042f540-0042f560
 */

undefined4 __cdecl
FUN_0042f540(undefined4 param_1,int *param_2,char *param_3,char *param_4,size_t param_5)

{
  int iVar1;
  
  iVar1 = _strncmp(param_3,param_4,param_5);
  *param_2 = iVar1;
  return 0;
}


