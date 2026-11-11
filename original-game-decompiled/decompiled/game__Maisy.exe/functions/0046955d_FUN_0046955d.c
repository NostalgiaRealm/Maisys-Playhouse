
/* ==== FUN_0046955d @ 0046955d ==== 
 * signature: undefined __fastcall FUN_0046955d(char * param_1, int param_2)
 * body: 0046955d-0046955f
 */

void __fastcall FUN_0046955d(char *param_1,int param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  char cVar2;
  char cVar4;
  char cVar5;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  char *pcVar3;
  char *pcVar6;
  
  pcVar6 = (char *)(unaff_EBX + -0x6c3effba + param_2 * 4);
  cVar5 = (char)((uint)param_1 >> 8);
  *pcVar6 = *pcVar6 + cVar5;
  cVar2 = (char)param_2;
  cVar4 = (char)((uint)param_2 >> 8) + cVar2;
  pcVar3 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar4,cVar2));
  cVar5 = (char)in_EAX + cVar5;
  pcVar6 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  *pcVar6 = *pcVar6 + cVar5;
  cRam4b004694 = cRam4b004694 + cVar2;
  *(char *)(unaff_ESI + 6) = *(char *)(unaff_ESI + 6) + (char)((uint)unaff_EBX >> 8);
  *param_1 = *param_1 + cVar4;
  pcVar6 = (char *)((int)pcVar3 * 4 + -0x6ae8ffba);
  *pcVar6 = *pcVar6 + (char)((uint)unaff_EBP >> 8);
  *pcVar3 = *pcVar3 + (char)param_1;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


