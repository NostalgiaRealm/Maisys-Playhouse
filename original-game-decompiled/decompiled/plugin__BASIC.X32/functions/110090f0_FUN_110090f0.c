
/* ==== FUN_110090f0 @ 110090f0 ==== 
 * signature: undefined __cdecl FUN_110090f0(int param_1, int param_2, undefined4 param_3, ushort * param_4)
 * body: 110090f0-11009258
 */

void __cdecl FUN_110090f0(int param_1,int param_2,undefined4 param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  undefined2 uVar10;
  undefined4 uVar9;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_1 + 8);
  uVar8 = (undefined2)((uint)param_2 >> 0x10);
  uVar10 = (undefined2)((uint)param_1 >> 0x10);
  if (uVar1 == uVar2) {
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar3 == uVar4) {
      FUN_11005ee4(CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20)),*(undefined4 **)(param_2 + 0x1c),
                   CONCAT22((short)((uint)*(int *)(param_1 + 0xc) >> 0x10),
                            *(undefined2 *)(param_1 + 0x20)),*(undefined4 **)(param_1 + 0x1c),uVar3,
                   uVar1,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
      return;
    }
    uVar7 = CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20));
    uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_1 + 0x20));
    if ((int)uVar3 < (int)uVar4) {
      FUN_11005fc7(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),
                   uVar3,uVar4,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
      return;
    }
    FUN_1100601a(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),uVar3
                 ,uVar4,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_1 + 4);
  if ((int)uVar2 <= (int)uVar1) {
    if (iVar5 == iVar6) {
      FUN_11005f74(CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20)),*(undefined1 **)(param_2 + 0x1c),
                   CONCAT22((short)((uint)*(int *)(param_1 + 0xc) >> 0x10),
                            *(undefined2 *)(param_1 + 0x20)),*(undefined1 **)(param_1 + 0x1c),uVar1,
                   iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
      return;
    }
    uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_1 + 0x20));
    uVar7 = CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20));
    if (iVar5 < iVar6) {
      FUN_11009400(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),
                   iVar5,uVar1,iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
      return;
    }
    FUN_11006168(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),iVar5
                 ,uVar1,iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
    return;
  }
  if (iVar5 == iVar6) {
    FUN_11005f26(CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20)),*(undefined1 **)(param_2 + 0x1c),
                 CONCAT22((short)((uint)*(int *)(param_1 + 0xc) >> 0x10),
                          *(undefined2 *)(param_1 + 0x20)),*(undefined1 **)(param_1 + 0x1c),uVar1,
                 iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
    return;
  }
  uVar9 = CONCAT22(uVar10,*(undefined2 *)(param_1 + 0x20));
  uVar7 = CONCAT22(uVar8,*(undefined2 *)(param_2 + 0x20));
  if (iVar5 < iVar6) {
    FUN_11006069(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),iVar5
                 ,uVar1,iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
    return;
  }
  FUN_11009390(uVar7,*(undefined1 **)(param_2 + 0x1c),uVar9,*(undefined1 **)(param_1 + 0x1c),iVar5,
               uVar1,iVar6,uVar2,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4);
  return;
}


