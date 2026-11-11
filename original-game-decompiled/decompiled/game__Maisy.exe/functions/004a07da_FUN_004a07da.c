
/* ==== FUN_004a07da @ 004a07da ==== 
 * signature: undefined4 __fastcall FUN_004a07da(undefined4 param_1, int param_2)
 * body: 004a07da-004a07db
 */

undefined4 __fastcall FUN_004a07da(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  char cVar5;
  undefined4 in_EAX;
  char *pcVar4;
  int iVar6;
  uint *puVar7;
  byte *unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  char in_CF;
  int iVar3;
  
  cVar1 = ((char)in_EAX + -2) - in_CF;
  *(char *)(unaff_EBP + -0xfffb5fe) = *(char *)(unaff_EBP + -0xfffb5fe) + cVar1;
  iVar6 = CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + *(char *)(param_2 + -1)) +
          *(int *)(param_2 + -1);
  bVar2 = cVar1 + (char)((uint)in_EAX >> 8) * '\x03';
  iVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)bVar2);
  (&stack0x0000004a)[iVar3] = (&stack0x0000004a)[iVar3] + (char)((uint)unaff_EBX >> 8);
  *unaff_ESI = *unaff_ESI + (char)((uint)iVar6 >> 8) + (char)iVar6;
  pcVar4 = (char *)(CONCAT31((int3)((uint)iVar3 >> 8),bVar2 + 0x4a) + 0x562004a);
  unaff_EBX[0x65004a05] = unaff_EBX[0x65004a05] + (char)param_2 + -3;
  cVar5 = (char)((uint)pcVar4 >> 8);
  *pcVar4 = *pcVar4 + cVar5;
  puVar7 = (uint *)(param_2 + -5);
  *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
  cVar1 = (char)pcVar4;
  pcVar4 = (char *)CONCAT22((short)((uint)pcVar4 >> 0x10),CONCAT11(cVar5 + (char)unaff_EBX,cVar1));
  out(2,cVar1);
  *pcVar4 = *pcVar4 + cVar1;
  iVar3 = iRam05050505 + 0x2d32322e;
  *unaff_EBX = *unaff_EBX << 2 | *unaff_EBX >> 6;
  return CONCAT31((int3)((uint)(pcVar4 + iVar3) >> 8),((char)(pcVar4 + iVar3) + '\x04') * '\x02');
}


