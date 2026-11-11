
/* ==== FUN_00478cf0 @ 00478cf0 ==== 
 * signature: undefined __fastcall FUN_00478cf0(int param_1)
 * body: 00478cf0-00478d20
 */

void __fastcall FUN_00478cf0(int param_1)

{
  short sVar1;
  short sVar2;
  
  if (((*(int *)(param_1 + 0x54) != 0) &&
      (sVar1 = *(short *)(*(int *)(param_1 + 0x54) + 0x26), sVar1 != 0)) && (sVar2 = 1, 0 < sVar1))
  {
    do {
      sVar2 = sVar2 + 1;
      FUN_004792c0();
    } while (sVar2 <= sVar1);
  }
  return;
}


