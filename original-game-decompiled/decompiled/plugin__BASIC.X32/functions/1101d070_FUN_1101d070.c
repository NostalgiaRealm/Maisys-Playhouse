
/* ==== FUN_1101d070 @ 1101d070 ==== 
 * signature: uint __cdecl FUN_1101d070(char * param_1)
 * body: 1101d070-1101d0ae
 */

uint __cdecl FUN_1101d070(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  if ((((*param_1 == 'o') && (pcVar1 = param_1 + 1, param_1[1] == 'b')) &&
      (pcVar1 = param_1 + 2, param_1[2] == 'j')) &&
     (((pcVar1 = param_1 + 3, param_1[3] == 'e' &&
       (pcVar2 = param_1 + 5, pcVar1 = param_1 + 4, param_1[4] == 'c')) &&
      ((pcVar1 = pcVar2, *pcVar2 == 't' && (param_1[6] == '\0')))))) {
    return CONCAT31((int3)((uint)pcVar2 >> 8),1);
  }
  return (uint)pcVar1 & 0xffffff00;
}


