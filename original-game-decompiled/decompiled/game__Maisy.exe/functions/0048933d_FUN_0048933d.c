
/* ==== FUN_0048933d @ 0048933d ==== 
 * signature: undefined __fastcall FUN_0048933d(int param_1, int param_2)
 * body: 0048933d-0048933f
 */

void __fastcall FUN_0048933d(int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  char *pcVar4;
  char cVar5;
  char cVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  byte in_CF;
  byte in_AF;
  byte bVar3;
  
  bVar3 = (byte)in_EAX;
  cVar2 = bVar3 + (9 < (bVar3 & 0xf) | in_AF) * '\x06' + (0x99 < bVar3 | in_CF) * '`';
  cVar5 = (char)((uint)param_1 >> 8);
  cRam3f004892 = cRam3f004892 + cVar5;
  *(char *)(unaff_EBP + -0x6e) = *(char *)(unaff_EBP + -0x6e) + cVar2 + -1;
  *(char *)(unaff_EBX + -0x6e) = *(char *)(unaff_EBX + -0x6e) + (char)param_1;
  cVar6 = (char)(param_2 + -1);
  *(char *)(param_1 + -0x6e) = *(char *)(param_1 + -0x6e) + cVar6;
  *(char *)(unaff_EDI + -0x6e) = *(char *)(unaff_EDI + -0x6e) + cVar6;
  *(char *)(unaff_EBP + -0x6e) = *(char *)(unaff_EBP + -0x6e) + (char)unaff_EBX;
  *(char *)(unaff_EBX + -0x6e) =
       *(char *)(unaff_EBX + -0x6e) +
       (char)((uint)(CONCAT31((int3)((uint)in_EAX >> 8),cVar2) + -6) >> 8);
  *(char *)(param_1 + -0x6e) = *(char *)(param_1 + -0x6e) + cVar5;
  *(char *)(unaff_EDI + -0x6e) = *(char *)(unaff_EDI + -0x6e) + cVar5;
  cVar2 = (char)((uint)(param_2 + -1) >> 8);
  *(char *)(unaff_EBP + -0x6e) = *(char *)(unaff_EBP + -0x6e) + cVar2;
  *(char *)(unaff_EBP + -0x6e) = *(char *)(unaff_EBP + -0x6e) + cVar2;
  pcVar4 = (char *)(param_1 + -1);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


