
/* ==== FUN_004560f6 @ 004560f6 ==== 
 * signature: undefined __fastcall FUN_004560f6(char param_1, undefined4 param_2)
 * body: 004560f6-004560f7
 */

void __fastcall FUN_004560f6(char param_1,undefined4 param_2)

{
  code *pcVar1;
  int in_EAX;
  char *pcVar2;
  char *unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  byte bVar3;
  
  bVar3 = (byte)((uint)in_EAX >> 8) & *(byte *)(in_EAX + 0x45);
  pcVar2 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar3,(char)in_EAX));
  *unaff_EBX = *unaff_EBX + (char)((uint)param_2 >> 8);
  pcVar2[0x45] = pcVar2[0x45] + param_1;
  pcVar2[0x60] = pcVar2[0x60] + (char)unaff_EBX;
  pcVar2[0x45] = pcVar2[0x45] + bVar3;
  pcVar2[0x45] = pcVar2[0x45] + bVar3;
  *(char *)(unaff_ESI + 0x16004560) = *(char *)(unaff_ESI + 0x16004560) + (char)unaff_EBX;
  *pcVar2 = *pcVar2 + (char)in_EAX;
  *unaff_EDI = (int)(pcVar2 + *unaff_EDI);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


