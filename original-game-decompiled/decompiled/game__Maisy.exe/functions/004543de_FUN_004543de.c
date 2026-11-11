
/* ==== FUN_004543de @ 004543de ==== 
 * signature: undefined __fastcall FUN_004543de(char param_1, undefined4 param_2)
 * body: 004543de-004543df
 */

void __fastcall FUN_004543de(char param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined4 in_EAX;
  char cVar4;
  int unaff_EBX;
  int *unaff_ESI;
  
  cVar2 = *(char *)(unaff_EBX + 0x45);
  *(char *)(unaff_EBX + -0x51ffbabd) = *(char *)(unaff_EBX + -0x51ffbabd) + (char)unaff_EBX;
  cVar4 = (char)((uint)param_2 >> 8);
  *(char *)((int)unaff_ESI + -0x41ffbabd) = *(char *)((int)unaff_ESI + -0x41ffbabd) + cVar4;
  pcVar1 = (char *)(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar4 + param_1,(char)param_2))
                   + 0x4543);
  *pcVar1 = *pcVar1 + cVar2;
  *unaff_ESI = *unaff_ESI + CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


