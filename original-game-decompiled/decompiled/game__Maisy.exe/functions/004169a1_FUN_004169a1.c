
/* ==== FUN_004169a1 @ 004169a1 ==== 
 * signature: undefined __fastcall FUN_004169a1(int param_1, char param_2)
 * body: 004169a1-004169a3
 */

void __fastcall FUN_004169a1(int param_1,char param_2)

{
  code *pcVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 unaff_EBX;
  int *unaff_EDI;
  
  pcVar2 = (char *)(param_1 + 2);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *(char *)(param_1 + 0x6b) = *(char *)(param_1 + 0x6b) + (char)param_1 + '\x03';
  pcVar2 = (char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),
                             (char)unaff_EBX + (char)((uint)(param_1 + 1) >> 8)) + 0x68);
  *pcVar2 = *pcVar2 + (char)((uint)in_EAX >> 8);
  *(char *)((int)unaff_EDI + 0x41) = *(char *)((int)unaff_EDI + 0x41) + param_2;
  *in_EAX = *in_EAX + (char)in_EAX;
  *unaff_EDI = (int)(in_EAX + *unaff_EDI);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


