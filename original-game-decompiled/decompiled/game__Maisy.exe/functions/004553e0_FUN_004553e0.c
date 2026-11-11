
/* ==== FUN_004553e0 @ 004553e0 ==== 
 * signature: undefined4 __cdecl FUN_004553e0(short * param_1, undefined2 * param_2)
 * body: 004553e0-00455452
 */

undefined4 __cdecl FUN_004553e0(short *param_1,undefined2 *param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (sVar1 == 0x69) {
    *param_2 = 0x69;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_2 + 7) = 0;
    return 0;
  }
  if (sVar1 != 0x6d) {
    if (sVar1 != 0x73) {
      return 0x10000;
    }
    *param_2 = 0x69;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_2 + 7) = 0;
    return 0;
  }
  *param_2 = 0x69;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  return DAT_004e34cc;
}


