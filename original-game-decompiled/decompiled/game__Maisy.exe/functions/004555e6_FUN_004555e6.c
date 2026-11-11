
/* ==== FUN_004555e6 @ 004555e6 ==== 
 * signature: undefined __fastcall FUN_004555e6(int * param_1)
 * body: 004555e6-004555e7
 */

void __fastcall FUN_004555e6(int *param_1)

{
  code *pcVar1;
  char *in_EAX;
  char cVar2;
  char cVar3;
  int unaff_EBX;
  
  cVar3 = (char)unaff_EBX;
  *(char *)((int)param_1 + -0x66ffbaab) = *(char *)((int)param_1 + -0x66ffbaab) + cVar3;
  *(char *)((int)param_1 + -0x66ffbaab) = *(char *)((int)param_1 + -0x66ffbaab) + cVar3;
  *(char *)((int)param_1 + -0x66ffbaab) = *(char *)((int)param_1 + -0x66ffbaab) + cVar3;
  cVar2 = (char)((uint)param_1 >> 8);
  *(char *)(unaff_EBX + -0x66ffbaab) = *(char *)(unaff_EBX + -0x66ffbaab) + cVar2;
  *(char *)(unaff_EBX + -0x43ffbaab) = *(char *)(unaff_EBX + -0x43ffbaab) + cVar2;
  *(char *)((int)param_1 + -0x6effbaab) = *(char *)((int)param_1 + -0x6effbaab) + cVar3;
  *in_EAX = *in_EAX + (char)in_EAX;
  *param_1 = *param_1 + ((uint)in_EAX | 0xd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


