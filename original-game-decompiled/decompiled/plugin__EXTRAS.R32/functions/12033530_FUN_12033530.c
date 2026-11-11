
/* ==== FUN_12033530 @ 12033530 ==== 
 * signature: char * __cdecl FUN_12033530(char * param_1)
 * body: 12033530-12033557
 */

char * __cdecl FUN_12033530(char *param_1)

{
  char *pcVar1;
  
  __lock(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1202c520(0xc);
  return pcVar1;
}


