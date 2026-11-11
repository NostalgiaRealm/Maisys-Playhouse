
/* ==== FUN_0041fc72 @ 0041fc72 ==== 
 * signature: undefined __fastcall FUN_0041fc72(int param_1, undefined4 param_2)
 * body: 0041fc72-0041fc73
 */

void __fastcall FUN_0041fc72(int param_1,undefined4 param_2)

{
  char *pcVar1;
  code *pcVar2;
  int in_EAX;
  char cVar3;
  char cVar4;
  undefined4 unaff_EBX;
  char *pcVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  pcVar5 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(0xf7,(char)unaff_EBX));
  pcVar5[-8] = pcVar5[-8] + (char)((uint)in_EAX >> 8);
  cVar4 = (char)((uint)param_2 >> 8);
  cVar3 = (char)(param_1 + 2) + cVar4;
  *(char *)(unaff_ESI + -7) = *(char *)(unaff_ESI + -7) + -9;
  *pcVar5 = *pcVar5 + cVar3 + '\x02';
  pcVar1 = (char *)(in_EAX + unaff_EDI * 8);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)(in_EAX + 0x250041fa) = *(char *)(in_EAX + 0x250041fa) + (char)unaff_EBX;
  pcVar5[unaff_EDI * 8 + -0x3333ffbf] =
       pcVar5[unaff_EDI * 8 + -0x3333ffbf] +
       (char)((uint)(CONCAT31((int3)((uint)(param_1 + 2) >> 8),cVar3) + 5) >> 8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


