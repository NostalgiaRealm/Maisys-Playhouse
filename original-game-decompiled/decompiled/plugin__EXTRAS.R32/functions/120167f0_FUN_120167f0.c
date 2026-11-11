
/* ==== FUN_120167f0 @ 120167f0 ==== 
 * signature: undefined4 __cdecl FUN_120167f0(undefined2 * param_1)
 * body: 120167f0-12016874
 */

undefined4 __cdecl FUN_120167f0(undefined2 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  
  *param_1 = 0x17;
  sVar3 = 0;
  param_1[0x2b] = 1;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x10] = 0x66;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x2e] = 0x66;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  uVar1 = FUN_12027340((int)param_1);
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0x69;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 **)(param_1 + 0xe) = param_1 + 0x19;
  do {
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 1;
    *(undefined4 *)(param_1 + iVar2 * 2 + 0x1b) = 0;
  } while (sVar3 < 8);
  return 0;
}


