
/* ==== FUN_12015db0 @ 12015db0 ==== 
 * signature: undefined __cdecl FUN_12015db0(char * param_1)
 * body: 12015db0-12015dd0
 */

void __cdecl FUN_12015db0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = *param_1;
    if (('`' < cVar1) && (cVar1 < '{')) {
      *param_1 = cVar1 + -0x20;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return;
}


