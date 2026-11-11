
/* ==== FUN_1101fd40 @ 1101fd40 ==== 
 * signature: short * __cdecl FUN_1101fd40(uint param_1, uint param_2, int param_3)
 * body: 1101fd40-1101fe7c
 */

short * __cdecl FUN_1101fd40(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  bool bVar10;
  int local_4;
  
  iVar9 = 0;
  bVar3 = false;
  iVar2 = ((((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) - ((int)param_1 >> 0x1f)) +
          (param_1 ^ (int)param_1 >> 0x1f)) * 2 + 0xc;
  psVar4 = FUN_110291a0(iVar2,2);
  if (psVar4 == (short *)0x0) {
    return (short *)0x0;
  }
  if (param_1 == param_2) {
    if (param_3 != 0) {
      *psVar4 = (short)param_2;
      psVar4[1] = 0;
      return psVar4;
    }
    if (0 < (int)param_2) {
      psVar8 = psVar4;
      for (uVar7 = param_2 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        psVar8[0] = 1;
        psVar8[1] = 1;
        psVar8 = psVar8 + 2;
      }
      for (uVar7 = (uint)((param_2 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
        *psVar8 = 1;
        psVar8 = psVar8 + 1;
      }
      return psVar4;
    }
  }
  else {
    if ((int)param_1 < (int)param_2) {
      *psVar4 = 0;
      local_4 = 0;
      iVar5 = (int)param_2 / 2;
      psVar8 = psVar4;
      iVar6 = iVar9;
      if (0 < (int)param_2) {
        do {
          iVar5 = iVar5 - param_1;
          bVar10 = -1 < iVar5;
          if (!bVar10) {
            iVar5 = iVar5 + param_2;
          }
          iVar9 = iVar6;
          if (bVar10 != bVar3) {
            iVar9 = iVar6 + 1;
            psVar8[1] = 0;
            psVar8 = psVar8 + 1;
            bVar3 = bVar10;
            if (iVar2 <= iVar6 + -1) break;
          }
          *psVar8 = *psVar8 + 1;
          local_4 = local_4 + 1;
          iVar6 = iVar9;
        } while (local_4 < (int)param_2);
      }
      psVar4[iVar9 + 1] = 0;
      return psVar4;
    }
    *psVar4 = 0;
    iVar5 = 0;
    iVar6 = (int)(param_1 - 1) / 2;
    if (0 < (int)param_1) {
      do {
        if ((int)param_2 <= iVar9) {
          iVar9 = param_2 - 1;
        }
        psVar4[iVar9] = psVar4[iVar9] + 1;
        iVar6 = (iVar6 - param_2) + 1;
        if (iVar6 < 0) {
          psVar4[iVar9 + 1] = 0;
          iVar1 = iVar9 + -1;
          iVar6 = (param_1 - 1) + iVar6;
          iVar9 = iVar9 + 1;
          if (iVar2 <= iVar1) {
            return psVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1);
    }
  }
  return psVar4;
}


