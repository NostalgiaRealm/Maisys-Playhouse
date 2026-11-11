
/* ==== FUN_14022390 @ 14022390 ==== 
 * signature: char * __cdecl FUN_14022390(char * param_1)
 * body: 14022390-140223b7
 */

char * __cdecl FUN_14022390(char *param_1)

{
  char *pcVar1;
  
  __lock(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1401a650(0xc);
  return pcVar1;
}


