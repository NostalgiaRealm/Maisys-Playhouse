
/* ==== FUN_00455b69 @ 00455b69 ==== 
 * signature: undefined __fastcall FUN_00455b69(int param_1, undefined4 param_2)
 * body: 00455b69-00455b6b
 */

void __fastcall FUN_00455b69(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  char *pcVar2;
  char *unaff_EBX;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  char cVar3;
  
  if (param_1 != 0) {
    cVar3 = (char)((uint)in_EAX >> 8) + (char)((uint)param_2 >> 8);
    pcVar2 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(cVar3,(char)in_EAX));
    *unaff_EBX = *unaff_EBX + (char)unaff_retaddr;
    *unaff_EBX = *unaff_EBX + cVar3;
    *(char *)((int)unaff_EDI + 0x5a) = *(char *)((int)unaff_EDI + 0x5a) + cVar3;
    *(char *)((int)unaff_EDI + 0x5a) = *(char *)((int)unaff_EDI + 0x5a) + cVar3;
    unaff_EBX[-0x28ffbaa6] = unaff_EBX[-0x28ffbaa6] + (char)((uint)unaff_retaddr >> 8);
    *pcVar2 = *pcVar2 + (char)in_EAX;
    *unaff_EDI = (int)(pcVar2 + *unaff_EDI);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


