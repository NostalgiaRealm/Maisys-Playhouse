
/* ==== FUN_0049f050 @ 0049f050 ==== 
 * signature: char * __cdecl FUN_0049f050(char * param_1)
 * body: 0049f050-0049f077
 */

char * __cdecl FUN_0049f050(char *param_1)

{
  char *pcVar1;
  
  __lock(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_00493e20(0xc);
  return pcVar1;
}


