
/* ==== FUN_1100c0fe @ 1100c0fe ==== 
 * signature: undefined __fastcall FUN_1100c0fe(char * param_1, char param_2)
 * body: 1100c0fe-1100c0ff
 */

void __fastcall FUN_1100c0fe(char *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  undefined3 uVar4;
  byte bVar5;
  char *unaff_EBX;
  byte *unaff_ESI;
  byte *pbVar3;
  
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  bRam00000000 = (bRam00000000 << 1 | bRam00000000 >> 7) << 1 | (bRam00000000 & 0x7f) >> 6;
  *param_1 = *param_1 + param_2 + '\x01';
  *unaff_ESI = *unaff_ESI << 1 | *unaff_ESI >> 7;
  *param_1 = *param_1 + param_2 + '\x01';
  *unaff_ESI = *unaff_ESI << 1 | *unaff_ESI >> 7;
  *param_1 = *param_1 + (char)unaff_ESI;
  bVar5 = (byte)param_1;
  *unaff_ESI = *unaff_ESI | bVar5;
  uVar4 = (undefined3)((uint)unaff_ESI >> 8);
  cVar2 = (char)unaff_ESI + *unaff_EBX;
  pbVar3 = (byte *)CONCAT31(uVar4,cVar2);
  *pbVar3 = *pbVar3 | bVar5;
  pbVar3 = (byte *)CONCAT31(uVar4,cVar2 + '\b');
  *pbVar3 = *pbVar3 | bVar5;
  *pbVar3 = *pbVar3 | bVar5;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


