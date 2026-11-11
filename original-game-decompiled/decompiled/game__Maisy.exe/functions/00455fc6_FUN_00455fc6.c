
/* ==== FUN_00455fc6 @ 00455fc6 ==== 
 * signature: undefined __fastcall FUN_00455fc6(undefined4 param_1, int param_2)
 * body: 00455fc6-00455fc7
 */

void __fastcall FUN_00455fc6(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char in_AH;
  byte bVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  char *unaff_retaddr;
  char *pcVar3;
  
  bVar2 = (byte)unaff_EBX | *(byte *)(unaff_EDI + 0x45);
  pcVar3 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  *pcVar3 = *pcVar3 + bVar2;
  *unaff_retaddr = *unaff_retaddr + in_AH;
  *(char *)(unaff_EBP + 0x61) = *(char *)(unaff_EBP + 0x61) + (char)((uint)param_2 >> 8);
  *(char *)(param_2 + 0x455f) = *(char *)(param_2 + 0x455f) + (char)((uint)unaff_EBX >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


