
/* ==== FUN_0043d2c0 @ 0043d2c0 ==== 
 * signature: undefined __cdecl FUN_0043d2c0(char * param_1)
 * body: 0043d2c0-0043d2e6
 */

void __cdecl FUN_0043d2c0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (1 < ~uVar2 - 1) {
    cVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = cVar1;
  }
  return;
}


