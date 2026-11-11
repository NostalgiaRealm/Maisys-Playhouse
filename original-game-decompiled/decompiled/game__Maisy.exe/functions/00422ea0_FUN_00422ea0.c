
/* ==== FUN_00422ea0 @ 00422ea0 ==== 
 * signature: undefined __stdcall FUN_00422ea0(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6)
 * body: 00422ea0-00422ed5
 */

void FUN_00422ea0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  char *pcVar1;
  
  pcVar1 = FUN_0043b9c0(param_1,0xff);
  *param_6 = pcVar1;
  param_6[2] = param_3;
  param_6[1] = param_2;
  param_6[4] = param_5;
  param_6[3] = param_4;
  return;
}


