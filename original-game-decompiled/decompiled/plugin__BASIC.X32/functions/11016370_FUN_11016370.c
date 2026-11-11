
/* ==== FUN_11016370 @ 11016370 ==== 
 * signature: undefined __cdecl FUN_11016370(ushort * param_1, short * param_2, int param_3, HRGN param_4, short param_5)
 * body: 11016370-11016515
 */

void __cdecl FUN_11016370(ushort *param_1,short *param_2,int param_3,HRGN param_4,short param_5)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = (param_5 * 0x1f) / 100;
  if (local_10 < 0) {
    local_10 = -local_10;
  }
  local_14 = (int)param_2[1];
  if (param_5 < 1) {
    if (local_14 < param_2[3]) {
      do {
        iVar2 = (int)*param_2;
        if (iVar2 < param_2[2]) {
          do {
            if ((param_4 == (HRGN)0x0) || (BVar1 = PtInRegion(param_4,iVar2,local_14), BVar1 != 0))
            {
              uVar3 = (uint)*param_1;
              iVar6 = (uVar3 & 0x7c00) + local_10 * -0x400;
              iVar5 = (uVar3 & 0x3e0) + local_10 * -0x20;
              iVar4 = (uVar3 & 0x1f) - local_10;
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              *param_1 = (ushort)iVar4 | (ushort)iVar5 | (ushort)iVar6;
            }
            iVar2 = iVar2 + 1;
            param_1 = param_1 + 1;
          } while (iVar2 < param_2[2]);
        }
        param_1 = (ushort *)((int)param_1 + param_3);
        local_14 = local_14 + 1;
      } while (local_14 < param_2[3]);
    }
  }
  else if (local_14 < param_2[3]) {
    do {
      local_c = (int)*param_2;
      if (local_c < param_2[2]) {
        do {
          if ((param_4 == (HRGN)0x0) || (BVar1 = PtInRegion(param_4,local_c,local_14), BVar1 != 0))
          {
            uVar3 = (uint)*param_1;
            iVar4 = (uVar3 & 0x7c00) + local_10 * 0x400;
            iVar6 = (uVar3 & 0x3e0) + local_10 * 0x20;
            iVar2 = local_10 + (uVar3 & 0x1f);
            if (0x7c00 < iVar4) {
              iVar4 = 0x7c00;
            }
            if (0x3e0 < iVar6) {
              iVar6 = 0x3e0;
            }
            if (0x1f < iVar2) {
              iVar2 = 0x1f;
            }
            *param_1 = (ushort)iVar2 | (ushort)iVar6 | (ushort)iVar4;
          }
          param_1 = param_1 + 1;
          local_c = local_c + 1;
        } while (local_c < param_2[2]);
      }
      param_1 = (ushort *)((int)param_1 + param_3);
      local_14 = local_14 + 1;
    } while (local_14 < param_2[3]);
    return;
  }
  return;
}


