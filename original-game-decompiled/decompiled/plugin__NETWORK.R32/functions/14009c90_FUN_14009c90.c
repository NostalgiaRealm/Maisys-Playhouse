
/* ==== FUN_14009c90 @ 14009c90 ==== 
 * signature: undefined4 __cdecl FUN_14009c90(undefined2 * param_1)
 * body: 14009c90-14009cf8
 */

undefined4 __cdecl FUN_14009c90(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x1b] = 0x17;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  param_1[0x20] = 0x17;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0x25] = 0x17;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x8fd;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x8fe;
  *(undefined4 *)(param_1 + 0x26) = 0x8ff;
  param_1[5] = 0x66;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x2a) = uVar1;
  return 0;
}


