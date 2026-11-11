
/* ==== FUN_11002365 @ 11002365 ==== 
 * signature: uint __fastcall FUN_11002365(char * param_1, int param_2)
 * body: 11002365-11002367
 */

uint __fastcall FUN_11002365(char *param_1,int param_2)

{
  uint uVar1;
  byte *in_EAX;
  uint *puVar2;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  puVar2 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX & *in_EAX);
  *(int *)(unaff_EBP + 0x62110022) = (int)unaff_EDI + *(int *)(unaff_EBP + 0x62110022) + 4;
  uVar1 = *puVar2;
  *(int *)(param_2 + 0x23) = (int)(&stack0x00000000 + *(int *)(param_2 + 0x23));
  *param_1 = *param_1 + (char)param_2;
  return (uint)puVar2 & uVar1;
}


