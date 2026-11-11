
/* ==== FUN_1400dbe0 @ 1400dbe0 ==== 
 * signature: undefined4 __cdecl FUN_1400dbe0(undefined2 * param_1)
 * body: 1400dbe0-1400dc7d
 */

undefined4 __cdecl FUN_1400dbe0(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0;
  param_1[0x33] = 0x66;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  param_1[0x3c] = 0x66;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x45] = 0x66;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x31) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return 0;
}


