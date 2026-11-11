
/* ==== FUN_120032b0 @ 120032b0 ==== 
 * signature: undefined __fastcall FUN_120032b0(int param_1)
 * body: 120032b0-120032fa
 */

void __fastcall FUN_120032b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_12003670(param_1);
  if (0 < *(short *)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x12) + iVar3;
      iVar3 = iVar3 + 0x3c;
      FUN_12003de0(iVar1);
    } while (iVar2 < *(short *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_12016030(*(int *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


