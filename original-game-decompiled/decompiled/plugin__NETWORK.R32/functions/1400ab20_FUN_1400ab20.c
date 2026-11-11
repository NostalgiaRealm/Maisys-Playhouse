
/* ==== FUN_1400ab20 @ 1400ab20 ==== 
 * signature: undefined4 __cdecl FUN_1400ab20(undefined2 * param_1)
 * body: 1400ab20-1400abf2
 */

undefined4 __cdecl FUN_1400ab20(undefined2 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,0,0xe8);
  uVar2 = FUN_14008a80((int)param_1);
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 0x67) = uVar2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 7;
  *(undefined4 *)(param_1 + 0xb) = 0xc9;
  *(undefined4 *)(param_1 + 0xd) = 5;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x4c] = 1;
  param_1[10] = 100;
  param_1[0x6b] = 0x66;
  return 0;
}


