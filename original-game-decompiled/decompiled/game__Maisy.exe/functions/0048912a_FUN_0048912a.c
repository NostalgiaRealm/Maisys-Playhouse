
/* ==== FUN_0048912a @ 0048912a ==== 
 * signature: undefined __fastcall FUN_0048912a(undefined4 param_1, undefined4 param_2)
 * body: 0048912a-0048912b
 */

void __fastcall FUN_0048912a(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char unaff_BL;
  char unaff_BH;
  char *unaff_ESI;
  char *unaff_EDI;
  byte in_CF;
  
  *(byte *)(in_EAX + -0x6f26ffb8) = *(byte *)(in_EAX + -0x6f26ffb8) << 1 | in_CF;
  cVar5 = (char)((uint)param_1 >> 8);
  iVar3 = in_EAX + -3;
  cVar2 = (char)iVar3 + -2;
  *unaff_ESI = *unaff_ESI + cVar2;
  *unaff_EDI = *unaff_EDI + cVar2;
  pcVar4 = (char *)(CONCAT22((short)((uint)iVar3 >> 0x10),
                             CONCAT11((char)((uint)iVar3 >> 8) + (char)((uint)param_2 >> 8),
                                      (char)iVar3)) + -3);
  *pcVar4 = *pcVar4 + unaff_BL + cVar5;
  *pcVar4 = *pcVar4 + (char)(CONCAT11(cVar5 + unaff_BH,(char)param_1) - 2 >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


