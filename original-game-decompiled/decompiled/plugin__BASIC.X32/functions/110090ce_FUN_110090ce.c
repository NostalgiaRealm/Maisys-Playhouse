
/* ==== FUN_110090ce @ 110090ce ==== 
 * signature: undefined __fastcall FUN_110090ce(byte * param_1, int param_2, int param_3, undefined4 param_4, ushort * param_5)
 * body: 110090ce-110090cf
 */

void __fastcall
FUN_110090ce(byte *param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  byte bVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_EAX;
  undefined2 uVar10;
  undefined4 uVar9;
  byte bVar11;
  undefined2 uVar13;
  undefined4 uVar12;
  int unaff_EDI;
  int unaff_retaddr;
  byte bVar2;
  
  bVar11 = (byte)param_2;
  *param_1 = *param_1 + bVar11;
  bVar1 = *param_1;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar11;
  *(bool *)in_EAX = SCARRY1(bVar2,bVar11);
  iRam44110090 = iRam44110090 + unaff_EDI + (uint)CARRY1(bVar1,bVar11);
  *param_1 = *param_1 + bVar11;
  bVar1 = *param_1;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar11;
  *(bool *)in_EAX = SCARRY1(bVar2,bVar11);
  *(int *)(param_2 + -0x70) = *(int *)(param_2 + -0x70) + param_2 + (uint)CARRY1(bVar1,bVar11);
  *param_1 = *param_1 + bVar11;
  uVar3 = *(uint *)(param_3 + 8);
  uVar4 = *(uint *)(unaff_retaddr + 8);
  uVar10 = (undefined2)((uint)param_3 >> 0x10);
  uVar13 = (undefined2)((uint)unaff_retaddr >> 0x10);
  if (uVar3 == uVar4) {
    uVar5 = *(uint *)(param_3 + 4);
    uVar6 = *(uint *)(unaff_retaddr + 4);
    if (uVar5 == uVar6) {
      FUN_11005ee4(CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20)),*(undefined4 **)(param_3 + 0x1c)
                   ,CONCAT22((short)((uint)*(int *)(unaff_retaddr + 0xc) >> 0x10),
                             *(undefined2 *)(unaff_retaddr + 0x20)),
                   *(undefined4 **)(unaff_retaddr + 0x1c),uVar5,uVar3,*(int *)(param_3 + 0xc),
                   *(int *)(unaff_retaddr + 0xc));
      return;
    }
    uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20));
    uVar12 = CONCAT22(uVar13,*(undefined2 *)(unaff_retaddr + 0x20));
    if ((int)uVar5 < (int)uVar6) {
      FUN_11005fc7(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,
                   *(undefined1 **)(unaff_retaddr + 0x1c),uVar5,uVar6,uVar4,*(int *)(param_3 + 0xc),
                   *(int *)(unaff_retaddr + 0xc),param_5);
      return;
    }
    FUN_1100601a(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,
                 *(undefined1 **)(unaff_retaddr + 0x1c),uVar5,uVar6,uVar4,*(int *)(param_3 + 0xc),
                 *(int *)(unaff_retaddr + 0xc),param_5);
    return;
  }
  iVar7 = *(int *)(param_3 + 4);
  iVar8 = *(int *)(unaff_retaddr + 4);
  if ((int)uVar4 <= (int)uVar3) {
    if (iVar7 == iVar8) {
      FUN_11005f74(CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20)),*(undefined1 **)(param_3 + 0x1c)
                   ,CONCAT22((short)((uint)*(int *)(unaff_retaddr + 0xc) >> 0x10),
                             *(undefined2 *)(unaff_retaddr + 0x20)),
                   *(undefined1 **)(unaff_retaddr + 0x1c),uVar3,iVar8,uVar4,*(int *)(param_3 + 0xc),
                   *(int *)(unaff_retaddr + 0xc));
      return;
    }
    uVar12 = CONCAT22(uVar13,*(undefined2 *)(unaff_retaddr + 0x20));
    uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20));
    if (iVar7 < iVar8) {
      FUN_11009400(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,
                   *(undefined1 **)(unaff_retaddr + 0x1c),iVar7,uVar3,iVar8,uVar4,
                   *(int *)(param_3 + 0xc),*(int *)(unaff_retaddr + 0xc),param_5);
      return;
    }
    FUN_11006168(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,
                 *(undefined1 **)(unaff_retaddr + 0x1c),iVar7,uVar3,iVar8,uVar4,
                 *(int *)(param_3 + 0xc),*(int *)(unaff_retaddr + 0xc),param_5);
    return;
  }
  if (iVar7 == iVar8) {
    FUN_11005f26(CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20)),*(undefined1 **)(param_3 + 0x1c),
                 CONCAT22((short)((uint)*(int *)(unaff_retaddr + 0xc) >> 0x10),
                          *(undefined2 *)(unaff_retaddr + 0x20)),
                 *(undefined1 **)(unaff_retaddr + 0x1c),uVar3,iVar8,uVar4,*(int *)(param_3 + 0xc),
                 *(int *)(unaff_retaddr + 0xc));
    return;
  }
  uVar12 = CONCAT22(uVar13,*(undefined2 *)(unaff_retaddr + 0x20));
  uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_3 + 0x20));
  if (iVar7 < iVar8) {
    FUN_11006069(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,
                 *(undefined1 **)(unaff_retaddr + 0x1c),iVar7,uVar3,iVar8,uVar4,
                 *(int *)(param_3 + 0xc),*(int *)(unaff_retaddr + 0xc),param_5);
    return;
  }
  FUN_11009390(uVar9,*(undefined1 **)(param_3 + 0x1c),uVar12,*(undefined1 **)(unaff_retaddr + 0x1c),
               iVar7,uVar3,iVar8,uVar4,*(int *)(param_3 + 0xc),*(int *)(unaff_retaddr + 0xc),param_5
              );
  return;
}


