
/* ==== FUN_12024240 @ 12024240 ==== 
 * signature: int __cdecl FUN_12024240(char * param_1, char * param_2)
 * body: 12024240-12024267
 */

int __cdecl FUN_12024240(char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*param_2 == *param_1) {
    do {
      if (*param_1 == '\0') {
        return 0;
      }
      param_2 = param_2 + 1;
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (*param_2 == *pcVar1);
  }
  return (int)*param_1 - (int)*param_2;
}


