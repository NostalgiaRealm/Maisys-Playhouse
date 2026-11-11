
/* ==== FUN_14017150 @ 14017150 ==== 
 * signature: undefined4 __cdecl FUN_14017150(undefined2 * param_1)
 * body: 14017150-140171cc
 */

undefined4 __cdecl FUN_14017150(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x1b] = 0;
  param_1[0x43] = 0x66;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x31] = 0x66;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x3a] = 0x66;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 0x41) = 0;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x4e) = uVar1;
  return 0;
}


