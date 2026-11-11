
/* ==== FUN_11032b20 @ 11032b20 ==== 
 * signature: char * __cdecl FUN_11032b20(char * param_1)
 * body: 11032b20-11032b47
 */

char * __cdecl FUN_11032b20(char *param_1)

{
  char *pcVar1;
  
  __lock(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1102b240(0xc);
  return pcVar1;
}


