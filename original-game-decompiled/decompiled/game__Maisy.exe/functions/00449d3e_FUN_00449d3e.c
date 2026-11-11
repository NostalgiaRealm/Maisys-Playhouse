
/* ==== FUN_00449d3e @ 00449d3e ==== 
 * signature: undefined __fastcall FUN_00449d3e(undefined4 param_1, char * param_2)
 * body: 00449d3e-00449d3f
 */

void __fastcall FUN_00449d3e(undefined4 param_1,char *param_2)

{
  code *pcVar1;
  char *in_EAX;
  byte bVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  char *pcVar3;
  
  bVar2 = (byte)unaff_EBX ^ *(byte *)(unaff_EBP + -0x62f6ffbc);
  pcVar3 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  *pcVar3 = *pcVar3 + bVar2;
  *param_2 = *param_2 + (char)((uint)param_2 >> 8);
  *pcVar3 = *pcVar3 + (char)in_EAX;
  *in_EAX = *in_EAX + (char)in_EAX;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


