
/* ==== FUN_0043aae0 @ 0043aae0 ==== 
 * signature: short * __cdecl FUN_0043aae0(uint param_1, uint param_2, int param_3)
 * body: 0043aae0-0043ac13
 */

short * __cdecl FUN_0043aae0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_c;
  
  iVar8 = 0;
  bVar2 = false;
  iVar1 = ((((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) - ((int)param_1 >> 0x1f)) +
          (param_1 ^ (int)param_1 >> 0x1f)) * 2 + 0xc;
  psVar3 = FUN_0048ebf0(iVar1,2);
  if (psVar3 == (short *)0x0) {
    return (short *)0x0;
  }
  if (param_2 == param_1) {
    if (param_3 != 0) {
      *psVar3 = (short)param_2;
      psVar3[1] = 0;
      return psVar3;
    }
    if (0 < (int)param_2) {
      psVar7 = psVar3;
      for (uVar6 = param_2 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        psVar7[0] = 1;
        psVar7[1] = 1;
        psVar7 = psVar7 + 2;
      }
      for (uVar6 = (uint)((param_2 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
        *psVar7 = 1;
        psVar7 = psVar7 + 1;
      }
      return psVar3;
    }
  }
  else {
    if ((int)param_1 < (int)param_2) {
      *psVar3 = 0;
      local_c = 0;
      iVar4 = (int)param_2 / 2;
      psVar7 = psVar3;
      iVar5 = iVar8;
      if (0 < (int)param_2) {
        do {
          iVar4 = iVar4 - param_1;
          bVar10 = -1 < iVar4;
          if (!bVar10) {
            iVar4 = iVar4 + param_2;
          }
          iVar8 = iVar5;
          if (bVar2 != bVar10) {
            iVar8 = iVar5 + 1;
            psVar7[1] = 0;
            psVar7 = psVar7 + 1;
            bVar2 = bVar10;
            if (iVar1 <= iVar5 + -1) break;
          }
          *psVar7 = *psVar7 + 1;
          local_c = local_c + 1;
          iVar5 = iVar8;
        } while (local_c < (int)param_2);
      }
      psVar3[iVar8 + 1] = 0;
      return psVar3;
    }
    *psVar3 = 0;
    iVar4 = 0;
    iVar5 = (int)(param_1 - 1) / 2;
    if (0 < (int)param_1) {
      do {
        iVar9 = iVar8;
        if ((int)param_2 <= iVar8) {
          iVar9 = param_2 - 1;
        }
        psVar3[iVar9] = psVar3[iVar9] + 1;
        iVar5 = (iVar5 - param_2) + 1;
        iVar8 = iVar9;
        if (iVar5 < 0) {
          psVar3[iVar9 + 1] = 0;
          iVar8 = iVar9 + 1;
          iVar5 = (param_1 - 1) + iVar5;
          if (iVar1 <= iVar9 + -1) {
            return psVar3;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1);
    }
  }
  return psVar3;
}


