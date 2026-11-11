
/* ==== FUN_00407ca0 @ 00407ca0 ==== 
 * signature: undefined __fastcall FUN_00407ca0(int param_1)
 * body: 00407ca0-00407e4f
 */

void __fastcall FUN_00407ca0(int param_1)

{
  int iVar1;
  short sVar2;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int **)(param_1 + 0x9e) == (int *)0x0) {
    sVar2 = 1;
    do {
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      iVar1 = param_1 + iVar1 * 8;
      *(undefined2 *)(iVar1 + 0xf0) = 0;
      *(undefined2 *)(iVar1 + 0xec) = 0;
      *(undefined2 *)(iVar1 + 0xee) = 0;
      *(undefined2 *)(iVar1 + 0xea) = 0;
    } while (sVar2 < 4);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x9e) + 0x38c))(&local_c,0);
  if (local_c < 1) {
    *(undefined2 *)(param_1 + 0xf0) = 0;
    *(undefined2 *)(param_1 + 0xec) = 0;
    *(undefined2 *)(param_1 + 0xee) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xea) = 0;
    *(undefined2 *)(param_1 + 0xec) = 0;
    *(short *)(param_1 + 0xee) = local_c;
    *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_1 + 0xbe);
  }
  if (local_a < 1) {
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined2 *)(param_1 + 0xf4) = 0;
    *(undefined2 *)(param_1 + 0xf6) = 0;
    *(undefined2 *)(param_1 + 0xf2) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xf4) = 0;
    *(short *)(param_1 + 0xf2) = local_c;
    *(undefined2 *)(param_1 + 0xf6) = *(undefined2 *)(param_1 + 0xbc);
    *(short *)(param_1 + 0xf8) = local_a;
  }
  sVar2 = *(short *)(param_1 + 0xbe);
  if (local_6 < sVar2) {
    *(short *)(param_1 + 0xfa) = local_c;
    *(short *)(param_1 + 0xfe) = local_8;
    *(short *)(param_1 + 0xfc) = local_6;
    *(short *)(param_1 + 0x100) = sVar2;
  }
  else {
    *(undefined2 *)(param_1 + 0x100) = 0;
    *(undefined2 *)(param_1 + 0xfc) = 0;
    *(undefined2 *)(param_1 + 0xfe) = 0;
    *(undefined2 *)(param_1 + 0xfa) = 0;
  }
  if (local_8 < *(short *)(param_1 + 0xbc)) {
    *(undefined2 *)(param_1 + 0x104) = 0;
    *(short *)(param_1 + 0x102) = local_8;
    *(short *)(param_1 + 0x106) = *(short *)(param_1 + 0xbc);
    *(short *)(param_1 + 0x108) = sVar2;
    return;
  }
  *(undefined2 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x106) = 0;
  *(undefined2 *)(param_1 + 0x102) = 0;
  return;
}


