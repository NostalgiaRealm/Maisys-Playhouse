
/* ==== FUN_00452e39 @ 00452e39 ==== 
 * signature: undefined __fastcall FUN_00452e39(int param_1, int * param_2)
 * body: 00452e39-00452e3b
 */

void __fastcall FUN_00452e39(int param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  int in_EAX;
  byte *pbVar4;
  byte bVar5;
  byte *unaff_EBX;
  uint unaff_EBP;
  uint uVar6;
  byte *unaff_ESI;
  
  uVar6 = unaff_EBP & uRam2d370045;
  *(char *)(param_1 + 0x2d) = *(char *)(param_1 + 0x2d) + (char)param_2;
  unaff_EBX[0x2d] = unaff_EBX[0x2d] + (char)((uint)in_EAX >> 8);
  pcVar1 = (char *)(uVar6 + 0x30);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  *(char *)(param_1 + -0x1affbad3) = *(char *)(param_1 + -0x1affbad3) + (char)in_EAX;
  pbVar4 = (byte *)(in_EAX + -0x2cfb0045);
  bVar3 = (byte)pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  bVar5 = (byte)param_1;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *param_2 = (int)(pbVar4 + *param_2);
  *pbVar4 = *pbVar4 | bVar5;
  *unaff_EBX = *unaff_EBX | bVar3;
  pbVar4 = (byte *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar3 + 8);
  *pbVar4 = *pbVar4 | bVar5;
  pbVar4 = pbVar4 + 0x8080808;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *unaff_ESI = *unaff_ESI | (byte)pbVar4;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  *pbVar4 = *pbVar4 | bVar5;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


