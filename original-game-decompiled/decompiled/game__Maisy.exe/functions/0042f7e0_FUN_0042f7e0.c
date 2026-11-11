
/* ==== FUN_0042f7e0 @ 0042f7e0 ==== 
 * signature: undefined4 __cdecl FUN_0042f7e0(undefined4 param_1, undefined4 * param_2, void * param_3, int param_4, size_t param_5)
 * body: 0042f7e0-0042f800
 */

undefined4 __cdecl
FUN_0042f7e0(undefined4 param_1,undefined4 *param_2,void *param_3,int param_4,size_t param_5)

{
  void *pvVar1;
  
  pvVar1 = _memchr(param_3,param_4,param_5);
  *param_2 = pvVar1;
  return 0;
}


