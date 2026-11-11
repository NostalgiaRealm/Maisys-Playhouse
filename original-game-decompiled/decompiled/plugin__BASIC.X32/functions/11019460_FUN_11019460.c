
/* ==== FUN_11019460 @ 11019460 ==== 
 * signature: undefined __cdecl FUN_11019460(undefined4 * param_1, undefined4 param_2, int param_3)
 * body: 11019460-110194cc
 */

void __cdecl FUN_11019460(undefined4 *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (0 < *(short *)(param_3 + 0x28)) {
    do {
      iVar2 = *(int *)(param_3 + 0x20) + sVar3 * 0x58;
      sVar1 = *(short *)(iVar2 + 0x18);
      if ((sVar1 == 1) || (sVar1 == 6)) {
        FUN_11014cf0(param_1,(undefined4 *)(iVar2 + 0x1a));
      }
      iVar2 = *(int *)(param_3 + 0x20) + sVar3 * 0x58;
      if (*(short *)(iVar2 + 0x28) == 0x1c) {
        FUN_11014cf0(param_1,(undefined4 *)(iVar2 + 0x2e));
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < *(short *)(param_3 + 0x28));
  }
  return;
}


