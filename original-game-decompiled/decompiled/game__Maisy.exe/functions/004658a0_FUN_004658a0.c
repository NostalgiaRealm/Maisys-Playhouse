
/* ==== FUN_004658a0 @ 004658a0 ==== 
 * signature: undefined __cdecl FUN_004658a0(int param_1, int param_2, undefined4 param_3, ushort * param_4)
 * body: 004658a0-00465a36
 */

void __cdecl FUN_004658a0(int param_1,int param_2,undefined4 param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 uVar10;
  undefined4 uVar9;
  undefined2 uVar11;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_2 + 8);
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  uVar10 = (undefined2)((uint)param_2 >> 0x10);
  if (uVar1 == uVar2) {
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar3 == uVar4) {
      FUN_00423940(CONCAT22((short)((uint)*(undefined4 **)(param_1 + 0x1c) >> 0x10),
                            *(undefined2 *)(param_2 + 0x20)),*(undefined4 **)(param_2 + 0x1c),
                   CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20)),*(undefined4 **)(param_1 + 0x1c)
                   ,uVar3,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
      return;
    }
    uVar8 = CONCAT22(uVar10,*(undefined2 *)(param_2 + 0x20));
    uVar9 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
    if ((int)uVar3 < (int)uVar4) {
      FUN_00423a23(uVar8,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),
                   uVar3,uVar4,uVar1,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
      return;
    }
    FUN_00423a76(uVar8,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),uVar3
                 ,uVar4,uVar1,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
    return;
  }
  if ((int)uVar1 <= (int)uVar2) {
    iVar5 = *(int *)(param_2 + 4);
    iVar6 = *(int *)(param_1 + 4);
    if (iVar5 == iVar6) {
      FUN_004239d0(CONCAT22((short)((uint)*(undefined1 **)(param_1 + 0x1c) >> 0x10),
                            *(undefined2 *)(param_2 + 0x20)),*(undefined1 **)(param_2 + 0x1c),
                   CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20)),*(undefined1 **)(param_1 + 0x1c)
                   ,uVar2,iVar6,uVar1,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
      return;
    }
    iVar7 = *(int *)(param_2 + 0xc);
    uVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(param_1 + 0x20));
    uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_2 + 0x20));
    if (iVar5 < iVar6) {
      FUN_00465c10(uVar9,*(undefined1 **)(param_2 + 0x1c),uVar8,*(undefined1 **)(param_1 + 0x1c),
                   iVar5,uVar2,iVar6,uVar1,iVar7,*(int *)(param_1 + 0xc),param_4);
      return;
    }
    FUN_00423bc4(uVar9,*(undefined1 **)(param_2 + 0x1c),uVar8,*(undefined1 **)(param_1 + 0x1c),iVar5
                 ,uVar2,iVar6,uVar1,iVar7,*(int *)(param_1 + 0xc),param_4);
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_1 + 4);
  if (iVar5 == iVar6) {
    FUN_00423982(CONCAT22((short)((uint)*(undefined1 **)(param_1 + 0x1c) >> 0x10),
                          *(undefined2 *)(param_2 + 0x20)),*(undefined1 **)(param_2 + 0x1c),
                 CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20)),*(undefined1 **)(param_1 + 0x1c),
                 uVar2,iVar6,uVar1,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
    return;
  }
  iVar7 = *(int *)(param_2 + 0xc);
  uVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(param_1 + 0x20));
  uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_2 + 0x20));
  if (iVar5 < iVar6) {
    FUN_00423ac5(uVar9,*(undefined1 **)(param_2 + 0x1c),uVar8,*(undefined1 **)(param_1 + 0x1c),iVar5
                 ,uVar2,iVar6,uVar1,iVar7,*(int *)(param_1 + 0xc),param_4);
    return;
  }
  FUN_00465ba0(uVar9,*(undefined1 **)(param_2 + 0x1c),uVar8,*(undefined1 **)(param_1 + 0x1c),iVar5,
               uVar2,iVar6,uVar1,iVar7,*(int *)(param_1 + 0xc),param_4);
  return;
}


