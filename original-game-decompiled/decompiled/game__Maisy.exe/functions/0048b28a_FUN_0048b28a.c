
/* ==== FUN_0048b28a @ 0048b28a ==== 
 * signature: undefined __fastcall FUN_0048b28a(int param_1, undefined4 param_2)
 * body: 0048b28a-0048b28b
 */

void __fastcall FUN_0048b28a(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int in_EAX;
  int iVar2;
  char cVar4;
  char *pcVar3;
  char cVar6;
  uint uVar5;
  char cVar7;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  cVar4 = (char)((uint)param_1 >> 8);
  *(byte *)unaff_ESI = (byte)*unaff_ESI + cVar4;
  cVar7 = (char)unaff_EBX;
  *(char *)(param_1 + -0x51) = *(char *)(param_1 + -0x51) + cVar7;
  pcVar3 = (char *)(unaff_EDI + -0x5050ffb4 + unaff_EBP * 4);
  *pcVar3 = *pcVar3 + (char)in_EAX + -3;
  pcVar3 = (char *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cVar7);
  cRam300048b0 = cRam300048b0 + (char)(in_EAX + -5);
  *(char *)(unaff_EBX + -0x50) = *(char *)(unaff_EBX + -0x50) + cVar7;
  iVar2 = CONCAT31((int3)((uint)(in_EAX + -5) >> 8),0x48) + -1;
  *(byte *)(unaff_ESI + -0x13bfedd4) = (byte)unaff_ESI[-0x13bfedd4] + (char)iVar2;
  *(char *)(unaff_EDI + 8) = *(char *)(unaff_EDI + 8) + 'H';
  cVar6 = (char)((uint)param_2 >> 8);
  *pcVar3 = *pcVar3 + cVar6;
  *(char *)(unaff_EBP + -0x4f) = *(char *)(unaff_EBP + -0x4f) + cVar7;
  pcVar3 = (char *)(CONCAT31(CONCAT21((short)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 8) + cVar7)
                             ,0x48) + -0x4cffb750);
  *pcVar3 = *pcVar3 + 'H';
  cVar6 = cVar6 + cVar7;
  pcVar3 = (char *)CONCAT31((int3)((uint)param_1 >> 8),0x48);
  *pcVar3 = *pcVar3 + 'H';
  uVar5 = CONCAT31(CONCAT21((short)((uint)param_2 >> 0x10),cVar6),0x48);
  pcVar3 = (char *)(uVar5 + (int)unaff_ESI * 4);
  *pcVar3 = *pcVar3 + cVar6;
  *(char *)(unaff_EDI + -0x46) = *(char *)(unaff_EDI + -0x46) + cVar7;
  *(char *)(unaff_EBP + 0x48ae) = *(char *)(unaff_EBP + 0x48ae) + cVar4;
  *unaff_ESI = *unaff_ESI + uVar5;
  *(byte *)unaff_ESI = (byte)*unaff_ESI | 0x48;
  *unaff_ESI = *unaff_ESI | uVar5;
  *unaff_ESI = *unaff_ESI + uVar5;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


