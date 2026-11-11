
/* ==== FUN_11026880 @ 11026880 ==== 
 * signature: undefined __cdecl FUN_11026880(short * param_1, short * param_2, uint param_3, short * param_4)
 * body: 11026880-110268e6
 */

void __cdecl FUN_11026880(short *param_1,short *param_2,uint param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = *param_4;
  if (1 < (int)param_3) {
    uVar2 = param_3 >> 1;
    param_3 = param_3 + uVar2 * -2;
    do {
      if (*param_1 != sVar1) {
        *param_2 = *param_1;
      }
      if (param_1[1] != sVar1) {
        param_2[1] = param_1[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if ((param_3 != 0) && (*param_1 != sVar1)) {
    *param_2 = *param_1;
  }
  return;
}


