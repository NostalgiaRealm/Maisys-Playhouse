
/* ==== FUN_0046d0b0 @ 0046d0b0 ==== 
 * signature: short __fastcall FUN_0046d0b0(int param_1)
 * body: 0046d0b0-0046d0c3
 */

short __fastcall FUN_0046d0b0(int param_1)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x4e); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3e)) {
    sVar2 = sVar2 + 1;
  }
  return sVar2;
}


