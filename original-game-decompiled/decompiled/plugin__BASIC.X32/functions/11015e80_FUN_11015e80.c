
/* ==== FUN_11015e80 @ 11015e80 ==== 
 * signature: undefined __cdecl FUN_11015e80(int param_1, POINT * param_2, short param_3, short param_4, undefined4 param_5, HRGN param_6, int param_7)
 * body: 11015e80-110160d3
 */

void __cdecl
FUN_11015e80(int param_1,POINT *param_2,short param_3,short param_4,undefined4 param_5,HRGN param_6,
            int param_7)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  HDC local_10;
  
  local_10 = *(HDC *)(param_1 + 0x22);
  iVar9 = *(int *)(param_7 + 0x2a);
  uVar3 = (uint)*(ushort *)(iVar9 + 0xe);
  iVar1 = *(int *)(iVar9 + 8);
  psVar2 = *(short **)(param_7 + 8);
  iVar7 = 0;
  if (param_4 != 0) {
    iVar4 = (int)uVar3 >> 3;
    uVar10 = *(int *)(iVar9 + 4) * iVar4 + 3U & 0xfffffffc;
    if (uVar3 == 8) {
      piVar8 = &DAT_11036110;
      do {
        if ((*piVar8 == *(int *)(param_7 + 0x2e)) && (iVar9 = iVar7, (short)piVar8[1] == param_4))
        break;
        piVar8 = piVar8 + 0x43;
        iVar7 = iVar7 + 1;
        iVar9 = -1;
      } while (piVar8 < &DAT_11036540);
      if (iVar9 < 0) {
        iVar9 = 0;
        iVar7 = 1;
        piVar8 = &DAT_11036224;
        do {
          if (*piVar8 < (int)(&DAT_11036118)[iVar9 * 0x43]) {
            iVar9 = iVar7;
          }
          piVar8 = piVar8 + 0x43;
          iVar7 = iVar7 + 1;
        } while (piVar8 < s_false_11036544 + 4);
        FUN_110160e0(param_1,local_10,param_4,(int)(&DAT_1103611c + iVar9 * 0x10c));
        (&DAT_11036110)[iVar9 * 0x43] = *(undefined4 *)(param_7 + 0x2e);
        (&DAT_11036114)[iVar9 * 0x86] = param_4;
      }
      DVar5 = timeGetTime();
      (&DAT_11036118)[iVar9 * 0x43] = (DVar5 * 6) / 100;
      local_10 = (HDC)(&DAT_1103611c + iVar9 * 0x10c);
    }
    bVar11 = param_6 == (HRGN)0x0;
    if (bVar11) {
      param_6 = CreatePolygonRgn(param_2,(int)param_3,1);
    }
    if (0 < iVar1) {
      uVar10 = -uVar10;
    }
    if ((param_2 == (POINT *)0x0) || (param_3 == 0)) {
      psVar2 = *(short **)(param_7 + 0xc);
      puVar6 = (uint *)FUN_11015a80(*(int *)(param_7 + 0x26),psVar2,uVar10,iVar1,iVar4);
      iVar9 = ((int)*psVar2 - (int)psVar2[2]) * iVar4 + uVar10;
      if (uVar3 == 8) {
        FUN_110162a0((byte *)puVar6,psVar2,iVar9,param_6,(int)local_10);
      }
      else if (uVar3 == 0x10) {
        FUN_11016370((ushort *)puVar6,psVar2,iVar9,param_6,param_4);
      }
      else if (uVar3 == 0x20) {
        FUN_11016520(puVar6,psVar2,iVar9,param_6,param_4);
      }
    }
    else {
      iVar9 = FUN_11015a80(*(int *)(param_7 + 0x26),psVar2,uVar10,iVar1,iVar4);
      FUN_11005580(param_1,&param_2->x,param_3,param_7,(int)local_10,iVar9,uVar10,uVar3,param_4);
    }
    if ((bVar11) && (param_6 != (HRGN)0x0)) {
      DeleteObject(param_6);
    }
  }
  return;
}


