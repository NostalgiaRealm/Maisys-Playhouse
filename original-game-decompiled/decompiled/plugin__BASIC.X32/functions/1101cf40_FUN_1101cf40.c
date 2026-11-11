
/* ==== FUN_1101cf40 @ 1101cf40 ==== 
 * signature: undefined4 __cdecl FUN_1101cf40(char * param_1)
 * body: 1101cf40-1101d06d
 */

undefined4 __cdecl FUN_1101cf40(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == 'x') && (param_1[1] == '\0')) {
    return 1;
  }
  if ((cVar1 == 'y') && (param_1[1] == '\0')) {
    return 2;
  }
  if ((cVar1 == 'h') && (param_1[1] == '\0')) {
    return 1;
  }
  if ((cVar1 == 'v') && (param_1[1] == '\0')) {
    return 2;
  }
  if ((((cVar1 == 's') && (param_1[1] == 't')) && (param_1[2] == 'a')) &&
     (((param_1[3] == 'r' && (param_1[4] == 't')) && (param_1[5] == '\0')))) {
    return 3;
  }
  if (((cVar1 == 'e') && (param_1[1] == 'n')) && ((param_1[2] == 'd' && (param_1[3] == '\0')))) {
    return 4;
  }
  if (((((cVar1 == 'a') && (param_1[1] == 'n')) && (param_1[2] == 'g')) &&
      ((param_1[3] == 'l' && (param_1[4] == 'e')))) && (param_1[5] == '\0')) {
    return 5;
  }
  if (((cVar1 == 'm') && (param_1[1] == 'a')) &&
     ((((param_1[2] == 'g' && (((param_1[3] == 'n' && (param_1[4] == 'i')) && (param_1[5] == 't'))))
       && (((param_1[6] == 'u' && (param_1[7] == 'd')) && (param_1[8] == 'e')))) &&
      (param_1[9] == '\0')))) {
    return 6;
  }
  return 0xffffffff;
}


