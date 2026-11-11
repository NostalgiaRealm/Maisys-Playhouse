
/* ==== FUN_12023092 @ 12023092 ==== 
 * signature: uint __fastcall FUN_12023092(undefined4 param_1, char * param_2)
 * body: 12023092-12023093
 */

uint __fastcall FUN_12023092(undefined4 param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint *in_EAX;
  uint uVar3;
  char cVar4;
  char cVar5;
  char *pcVar7;
  undefined3 uVar8;
  undefined4 *unaff_ESI;
  int in_GS_OFFSET;
  byte *pbVar6;
  
  bVar2 = (byte)in_EAX;
  param_2[in_GS_OFFSET] = param_2[in_GS_OFFSET] ^ bVar2;
  cVar4 = (char)param_2 + *param_2;
  pbVar6 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),cVar4);
  out(*unaff_ESI,(short)pbVar6);
  *pbVar6 = *pbVar6 ^ bVar2;
  pcVar7 = (char *)CONCAT22((short)((uint)param_2 >> 0x10),
                            CONCAT11((char)((uint)param_2 >> 8) +
                                     *(char *)((int)in_EAX + (int)unaff_ESI + 6),cVar4));
  uVar8 = (undefined3)((uint)pcVar7 >> 8);
  cVar5 = cVar4 + *pcVar7;
  if (cVar5 != '\0' && SCARRY1(cVar4,*pcVar7) == cVar5 < '\0') {
    pbVar6 = (byte *)CONCAT31(uVar8,cVar5 + *(char *)CONCAT31(uVar8,cVar5));
    *in_EAX = *in_EAX ^ 2;
    *pbVar6 = *pbVar6 ^ bVar2;
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (uint)in_EAX & 0xffff0000;
}


