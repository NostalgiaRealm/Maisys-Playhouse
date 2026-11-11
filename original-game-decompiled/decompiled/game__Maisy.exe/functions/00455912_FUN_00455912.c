
/* ==== FUN_00455912 @ 00455912 ==== 
 * signature: undefined __fastcall FUN_00455912(int param_1, ushort param_2)
 * body: 00455912-00455913
 */

void __fastcall FUN_00455912(int param_1,ushort param_2)

{
  ushort *puVar1;
  short sVar2;
  code *pcVar3;
  char cVar4;
  char *unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  char *unaff_retaddr;
  
  puVar1 = (ushort *)((int)unaff_EDI + 0x45);
  sVar2 = (param_2 & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
  *(char *)(param_1 + 0x57) = *(char *)(param_1 + 0x57) + (char)((uint)unaff_EBX >> 8);
  cVar4 = (char)param_2;
  *(char *)(unaff_EBP + -0x59ffbaa8) = *(char *)(unaff_EBP + -0x59ffbaa8) + cVar4;
  *unaff_EBX = *unaff_EBX + cVar4;
  *unaff_EBX = *unaff_EBX + cVar4;
  *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + cVar4;
  *(char *)((int)unaff_EDI + 0x57) = *(char *)((int)unaff_EDI + 0x57) + cVar4;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_EDI = (int)(unaff_retaddr + *unaff_EDI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


