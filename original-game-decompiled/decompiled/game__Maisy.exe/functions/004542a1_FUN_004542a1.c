
/* ==== FUN_004542a1 @ 004542a1 ==== 
 * signature: undefined __fastcall FUN_004542a1(char param_1)
 * body: 004542a1-004542a3
 */

void __fastcall FUN_004542a1(char param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  char unaff_BH;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  char *pcVar3;
  
  cVar2 = (char)in_EAX + (char)((uint)in_EAX >> 8);
  pcVar3 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(char *)unaff_ESI = (char)*unaff_ESI + cVar2;
  *(char *)(unaff_EBP + 0x46) = *(char *)(unaff_EBP + 0x46) + unaff_BH;
  *(char *)(unaff_EDI + -0x6cffbabe) =
       *(char *)(unaff_EDI + -0x6cffbabe) + param_1 + (char)in_EAX + '\x03';
  *pcVar3 = *pcVar3 + cVar2;
  *unaff_ESI = (int)(pcVar3 + *unaff_ESI);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


