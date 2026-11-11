
/* ==== FUN_00456382 @ 00456382 ==== 
 * signature: undefined __fastcall FUN_00456382(char * param_1, int param_2)
 * body: 00456382-00456383
 */

void __fastcall FUN_00456382(char *param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  ushort in_AX;
  ushort *unaff_EBP;
  char *unaff_EDI;
  
  *(char *)(param_2 + 0x45) = *(char *)(param_2 + 0x45) + '\x01';
  *unaff_EDI = *unaff_EDI + (char)param_2;
  sVar1 = (in_AX & 3) - (*unaff_EBP & 3);
  *unaff_EBP = *unaff_EBP + (ushort)(0 < sVar1) * sVar1;
  sVar1 = (in_AX & 3) - (*unaff_EBP & 3);
  *unaff_EBP = *unaff_EBP + (ushort)(0 < sVar1) * sVar1;
  cVar3 = (char)in_AX;
  *(char *)(param_2 + 99) = *(char *)(param_2 + 99) + cVar3;
  *(char *)(param_2 + 99) = *(char *)(param_2 + 99) + cVar3;
  *param_1 = *param_1 + cVar3;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


