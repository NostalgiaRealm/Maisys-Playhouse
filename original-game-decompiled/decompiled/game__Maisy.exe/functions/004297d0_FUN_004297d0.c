
/* ==== FUN_004297d0 @ 004297d0 ==== 
 * signature: undefined __cdecl FUN_004297d0(int * param_1)
 * body: 004297d0-00429829
 */

void __cdecl FUN_004297d0(int *param_1)

{
  *(code **)*param_1 = FUN_004870d0;
  *(undefined4 *)(*param_1 + 4) = 1;
  *(code **)param_1[1] = FUN_00429760;
  *(undefined4 *)(param_1[1] + 4) = 1;
  *(code **)(param_1[1] + 8) = FUN_00429740;
  *(undefined4 *)(param_1[1] + 0xc) = 1;
  *(code **)(param_1[1] + 0x10) = FUN_00429790;
  *(undefined4 *)(param_1[1] + 0x14) = 1;
  *(code **)(param_1[1] + 0x18) = FUN_004297b0;
  *(undefined4 *)(param_1[1] + 0x1c) = 1;
  return;
}


