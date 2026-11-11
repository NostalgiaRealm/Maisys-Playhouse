
/* ==== FUN_10006340 @ 10006340 ==== 
 * signature: undefined __cdecl FUN_10006340(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 10006340-10006395
 */

void __cdecl FUN_10006340(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 < 0) {
    iVar1 = -param_3;
  }
  param_1[2] = param_3;
  *(short *)((int)param_1 + 0xe) = (short)param_4;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0x28;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[5] = ((param_4 >> 3) * param_2 + 3U & 0xfffffffc) * iVar1;
  return;
}


