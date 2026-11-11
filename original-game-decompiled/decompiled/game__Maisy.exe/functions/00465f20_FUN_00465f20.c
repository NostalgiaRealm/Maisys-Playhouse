
/* ==== FUN_00465f20 @ 00465f20 ==== 
 * signature: undefined __cdecl FUN_00465f20(char * param_1, char * param_2, uint param_3, char * param_4)
 * body: 00465f20-00465f7b
 */

void __cdecl FUN_00465f20(char *param_1,char *param_2,uint param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_4;
  if (1 < (int)param_3) {
    uVar2 = param_3 >> 1;
    param_3 = param_3 + uVar2 * -2;
    do {
      if (*param_1 != cVar1) {
        *param_2 = *param_1;
      }
      if (param_1[1] != cVar1) {
        param_2[1] = param_1[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if ((param_3 != 0) && (*param_1 != cVar1)) {
    *param_2 = *param_1;
  }
  return;
}


