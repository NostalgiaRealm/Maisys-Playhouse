
/* ==== FUN_1100f780 @ 1100f780 ==== 
 * signature: undefined __cdecl FUN_1100f780(char * param_1, int param_2, char param_3, char param_4)
 * body: 1100f780-1100f7a2
 */

void __cdecl FUN_1100f780(char *param_1,int param_2,char param_3,char param_4)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 == param_3) {
      *param_1 = param_4;
    }
    param_1 = param_1 + 1;
  }
  return;
}


