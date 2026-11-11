
/* ==== FUN_10006e5a @ 10006e5a ==== 
 * signature: undefined __fastcall FUN_10006e5a(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 10006e5a-10006e5b
 */

void __fastcall
FUN_10006e5a(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  code cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *in_EAX;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte bVar10;
  undefined1 *puVar9;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  char unaff_BL;
  int iVar15;
  uint unaff_EBP;
  int iVar16;
  int unaff_ESI;
  int iVar17;
  short sVar18;
  code *unaff_EDI;
  undefined6 uVar19;
  int unaff_retaddr;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined *puStack_10;
  int iStack_8;
  int iStack_4;
  
  lVar4 = (longlong)*in_EAX * 0x69f210;
  pbVar5 = (byte *)lVar4;
  bVar1 = *pbVar5;
  bVar10 = (byte)((uint)param_1 >> 8);
  bVar11 = *pbVar5 + bVar10;
  *pbVar5 = bVar11 + ((int)pbVar5 != lVar4);
  iStack_4 = 0;
  *(char *)(unaff_ESI + 0x69) =
       *(char *)(unaff_ESI + 0x69) + unaff_BL +
       (CARRY1(bVar1,bVar10) || CARRY1(bVar11,(int)pbVar5 != lVar4));
  bVar1 = *pbVar5;
  bVar11 = (byte)param_2;
  *pbVar5 = *pbVar5 + bVar11;
  iStack_8 = 0;
  *(char *)(param_2 + 0x6e) = *(char *)(param_2 + 0x6e) + bVar11 + !CARRY1(bVar1,bVar11);
  *pbVar5 = *pbVar5 + bVar11;
  cRam05050505 = cRam05050505 + (char)lVar4;
  puStack_10 = &UNK_10006e91;
  uVar19 = (*unaff_EDI)();
  uVar13 = (undefined2)((uint6)uVar19 >> 0x20);
  pcVar6 = (char *)uVar19;
  cVar2 = (code)in(uVar13);
  *unaff_EDI = cVar2;
  cVar12 = (char)((uint6)uVar19 >> 0x20);
  *pcVar6 = *pcVar6 + cVar12;
  *pcVar6 = *pcVar6 + cVar12;
  uVar3 = in(uVar13);
  *(undefined4 *)(unaff_EDI + 1) = uVar3;
  *pcVar6 = *pcVar6 + cVar12;
  *pcVar6 = *pcVar6 + cVar12;
  *(uint *)(unaff_ESI + -1) = *(uint *)(unaff_ESI + -1) ^ unaff_EBP;
  *pcVar6 = *pcVar6 + (char)uVar19;
  iVar16 = param_3 - unaff_retaddr;
  iVar17 = iVar16;
  if (iVar16 < 0) {
    iVar17 = unaff_retaddr - param_3;
  }
  iVar7 = param_5 - param_4;
  iVar15 = iVar7;
  if (iVar7 < 0) {
    iVar15 = param_4 - param_5;
  }
  puStack_10 = (undefined *)(((iVar16 < 1) - 1 & 2) - 1);
  iStack_24 = iVar15 * 2 - iVar17;
  iStack_18 = ((iVar7 < 1) - 1 & 2) - 1;
  iStack_14 = iVar17 * 2;
  FUN_10006070(iStack_8,&param_5,&iStack_20);
  FUN_10006070(iStack_4,&iStack_8,&iStack_1c);
  if (-1 < iVar17) {
    iStack_4 = iVar17 + 1;
    do {
      uVar8 = (uint)(*(ushort *)(param_5 + 0xe) >> 3);
      puVar9 = (undefined1 *)
               (unaff_retaddr * uVar8 +
               iStack_20 + (*(int *)(param_5 + 4) * uVar8 + 3 & 0xfffffffc) * param_7);
      uVar8 = (uint)(*(ushort *)(iStack_8 + 0xe) >> 3);
      sVar18 = 0;
      puVar14 = (undefined1 *)
                (param_4 * uVar8 +
                iStack_1c + (*(int *)(iStack_8 + 4) * uVar8 + 3 & 0xfffffffc) * param_6);
      if (*(ushort *)(param_5 + 0xe) >> 3 != 0) {
        do {
          *puVar9 = *puVar14;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
          sVar18 = sVar18 + 1;
        } while (sVar18 < (short)(*(ushort *)(param_5 + 0xe) >> 3));
      }
      if (-1 < iStack_24) {
        do {
          param_4 = param_4 + (short)iStack_18;
          iStack_24 = iStack_24 - iStack_14;
        } while (-1 < iStack_24);
      }
      unaff_retaddr = unaff_retaddr + (short)puStack_10;
      iStack_24 = iStack_24 + iVar15 * 2;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  return;
}


