
/* ==== FUN_00465a40 @ 00465a40 ==== 
 * signature: undefined __cdecl FUN_00465a40(int param_1, int param_2, byte * param_3, ushort * param_4)
 * body: 00465a40-00465b95
 */

void __cdecl FUN_00465a40(int param_1,int param_2,byte *param_3,ushort *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uVar11;
  undefined4 uVar10;
  
  bVar1 = *param_3;
  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_1 + 8);
  uVar11 = (undefined2)(uVar2 >> 0x10);
  if (uVar2 != uVar3) {
    iVar7 = *(int *)(param_2 + 4);
    if ((int)uVar3 <= (int)uVar2) {
      iVar8 = *(int *)(param_1 + 4);
      uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
      pcVar6 = *(char **)(param_1 + 0x1c);
      uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
      if (iVar8 <= iVar7) {
        FUN_00423c3f(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar7,uVar2,iVar8,uVar3,
                     *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
        return;
      }
      FUN_00465c80(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar7,uVar2,iVar8,uVar3,
                   *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
      return;
    }
    iVar8 = *(int *)(param_1 + 4);
    pcVar6 = *(char **)(param_1 + 0x1c);
    uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
    uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
    if (iVar7 <= iVar8) {
      FUN_00423b35(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar7,uVar2,iVar8,uVar3,
                   *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
      return;
    }
    FUN_00465d50(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar7,uVar2,iVar8,uVar3,
                 *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
    return;
  }
  uVar4 = *(uint *)(param_2 + 4);
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar4 == uVar5) {
    FUN_0042388c(CONCAT22((short)((uint)*(char **)(param_1 + 0x1c) >> 0x10),
                          *(undefined2 *)(param_2 + 0x20)),*(char **)(param_2 + 0x1c),
                 CONCAT22((short)((uint)*(int *)(param_1 + 0xc) >> 0x10),
                          *(undefined2 *)(param_1 + 0x20)),*(char **)(param_1 + 0x1c),uVar4,uVar2,
                 *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),bVar1);
    return;
  }
  uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
  pcVar6 = *(char **)(param_1 + 0x1c);
  uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
  if ((int)uVar4 < (int)uVar5) {
    FUN_00465c80(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,uVar4,uVar2,uVar5,uVar3,
                 *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
    return;
  }
  FUN_00465d50(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,uVar4,uVar2,uVar5,uVar3,
               *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
  return;
}


