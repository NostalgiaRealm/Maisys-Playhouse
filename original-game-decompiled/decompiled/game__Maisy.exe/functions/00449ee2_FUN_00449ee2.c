
/* ==== FUN_00449ee2 @ 00449ee2 ==== 
 * signature: undefined __stdcall FUN_00449ee2(void)
 * body: 00449ee2-00449ee3
 */

void FUN_00449ee2(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined4 in_EAX;
  char unaff_BL;
  
  cVar3 = (char)in_EAX + unaff_BL;
  pcVar1 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),
                             CONCAT11((char)((uint)in_EAX >> 8) + cVar3,cVar3)) + 0x449e);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


