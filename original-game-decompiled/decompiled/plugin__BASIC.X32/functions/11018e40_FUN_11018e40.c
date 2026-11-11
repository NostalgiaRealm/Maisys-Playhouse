
/* ==== FUN_11018e40 @ 11018e40 ==== 
 * signature: undefined __cdecl FUN_11018e40(int param_1, int param_2)
 * body: 11018e40-11018eae
 */

void __cdecl FUN_11018e40(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  short sVar4;
  
  sVar4 = 0;
  if (0 < *(short *)(param_1 + 0x28)) {
    do {
      iVar1 = sVar4 * 0x58;
      iVar3 = *(int *)(param_1 + 0x20) + iVar1;
      if (*(short *)(iVar3 + 0x28) == 0x1c) {
        pcVar2 = FUN_11027da0(*(char **)(iVar3 + 0x32));
        *(char **)(*(int *)(param_2 + 0x18) + 0x32 + iVar1) = pcVar2;
      }
      else if (*(short *)(iVar3 + 0x28) == 0xd) {
        pcVar2 = FUN_11027da0(*(char **)(iVar3 + 0x2c));
        *(char **)(*(int *)(param_2 + 0x18) + 0x2c + iVar1) = pcVar2;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < *(short *)(param_1 + 0x28));
  }
  return;
}


