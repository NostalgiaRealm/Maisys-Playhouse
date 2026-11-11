
/* ==== FUN_11028d40 @ 11028d40 ==== 
 * signature: undefined FUN_11028d40(void)
 * body: 11028d40-11028d9d
 */

void FUN_11028d40(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (*param_2 <= *param_1) {
    sVar1 = *param_2;
  }
  *param_3 = sVar1;
  sVar1 = param_1[2];
  if (param_1[2] <= param_2[2]) {
    sVar1 = param_2[2];
  }
  param_3[2] = sVar1;
  sVar1 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    sVar1 = param_2[1];
  }
  param_3[1] = sVar1;
  sVar1 = param_1[3];
  if (param_1[3] <= param_2[3]) {
    sVar1 = param_2[3];
  }
  param_3[3] = sVar1;
  return;
}


