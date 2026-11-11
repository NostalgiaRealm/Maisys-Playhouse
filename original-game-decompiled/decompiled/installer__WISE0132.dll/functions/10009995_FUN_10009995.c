
/* ==== FUN_10009995 @ 10009995 ==== 
 * signature: undefined4 __cdecl FUN_10009995(char * param_1)
 * body: 10009995-100099b2
 */

undefined4 __cdecl FUN_10009995(char *param_1)

{
  while( true ) {
    if (*param_1 == '\0') {
      return 0;
    }
    if ((*param_1 == '%') && (param_1 = param_1 + 1, *param_1 != '%')) break;
    param_1 = param_1 + 1;
  }
  return 1;
}


