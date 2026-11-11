
/* ==== FUN_11009260 @ 11009260 ==== 
 * signature: undefined __cdecl FUN_11009260(int param_1, int param_2, byte * param_3, ushort * param_4)
 * body: 11009260-11009381
 */

void __cdecl FUN_11009260(int param_1,int param_2,byte *param_3,ushort *param_4)

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
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_2 + 8);
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  if (uVar3 != uVar2) {
    if ((int)uVar2 <= (int)uVar3) {
      iVar7 = *(int *)(param_1 + 4);
      iVar8 = *(int *)(param_2 + 4);
      pcVar6 = *(char **)(param_1 + 0x1c);
      uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
      uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
      if (iVar7 <= iVar8) {
        FUN_110061e3(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar8,uVar3,iVar7,uVar2,
                     *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
        return;
      }
      FUN_11009480(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar8,uVar3,iVar7,uVar2,
                   *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
      return;
    }
    iVar7 = *(int *)(param_1 + 4);
    iVar8 = *(int *)(param_2 + 4);
    pcVar6 = *(char **)(param_1 + 0x1c);
    uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
    uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
    if (iVar8 <= iVar7) {
      FUN_110060d9(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar8,uVar3,iVar7,uVar2,
                   *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
      return;
    }
    FUN_11009570(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,iVar8,uVar3,iVar7,uVar2,
                 *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
    return;
  }
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_2 + 4);
  if (uVar4 == uVar5) {
    FUN_11005e30(CONCAT22((short)((uint)*(char **)(param_1 + 0x1c) >> 0x10),
                          *(undefined2 *)(param_2 + 0x20)),*(char **)(param_2 + 0x1c),
                 CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20)),*(char **)(param_1 + 0x1c),uVar5,
                 uVar3,*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),bVar1);
    return;
  }
  pcVar6 = *(char **)(param_1 + 0x1c);
  uVar10 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x20));
  uVar9 = CONCAT22((short)((uint)pcVar6 >> 0x10),*(undefined2 *)(param_2 + 0x20));
  if ((int)uVar5 < (int)uVar4) {
    FUN_11009480(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,uVar5,uVar3,uVar4,uVar2,
                 *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
    return;
  }
  FUN_11009570(uVar9,*(char **)(param_2 + 0x1c),uVar10,pcVar6,uVar5,uVar3,uVar4,uVar2,
               *(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),param_4,bVar1);
  return;
}


