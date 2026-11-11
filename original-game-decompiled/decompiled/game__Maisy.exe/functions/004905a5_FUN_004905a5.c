
/* ==== FUN_004905a5 @ 004905a5 ==== 
 * signature: undefined __stdcall FUN_004905a5(void)
 * body: 004905a5-004905a7
 */

void FUN_004905a5(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  char *pcVar3;
  char *unaff_EBX;
  
  cVar2 = in(4);
  cVar2 = cVar2 + -0x25;
  pcVar3 = (char *)CONCAT31(CONCAT21((short)((uint)in_EAX >> 0x10),
                                     (char)((uint)in_EAX >> 8) * '\x02'),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  *unaff_EBX = *unaff_EBX + cVar2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


