
/* ==== FUN_11015801 @ 11015801 ==== 
 * signature: undefined __fastcall FUN_11015801(uint * param_1, uint param_2)
 * body: 11015801-11015803
 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_11015801(uint *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int unaff_EDI;
  
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  if (!CARRY4(uVar1,param_2)) {
    *param_1 = *param_1 + param_2;
    *(int *)(unaff_EDI + -4) = unaff_EDI;
    *param_1 = *param_1 + param_2;
    *(int *)(unaff_EDI + -8) = unaff_EDI;
    *param_1 = *param_1 + param_2;
    *(char *)param_1 = (char)*param_1 + -0xc;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uRam00000063 = *(undefined4 *)(param_2 + 0x10);
  uRam00000069 = *(undefined4 *)(param_2 + 0x16);
  uRam0000006d = *(undefined4 *)(param_2 + 0x1a);
  uRam00000071 = *(undefined4 *)(param_2 + 0x1e);
  uRam00000075 = *(undefined4 *)(param_2 + 0x22);
  uRam00000067 = *(undefined2 *)(param_2 + 0x14);
  uRam00000079 = *(undefined2 *)(param_2 + 0x26);
  uRam0000007b = *(undefined2 *)(param_2 + 0x28);
  return;
}


