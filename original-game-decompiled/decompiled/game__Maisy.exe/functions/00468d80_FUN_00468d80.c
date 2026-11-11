
/* ==== FUN_00468d80 @ 00468d80 ==== 
 * signature: undefined __cdecl FUN_00468d80(int param_1, int param_2, short * param_3, short * param_4)
 * body: 00468d80-00468e2a
 */

void __cdecl FUN_00468d80(int param_1,int param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int local_10;
  short *local_c;
  
  local_10 = *(int *)(param_1 + 4);
  psVar4 = *(short **)(param_1 + 0x1c);
  psVar7 = *(short **)(param_2 + 0x1c);
  sVar1 = *param_3;
  if (*(int *)(param_3 + 8) == 0) {
    if (0 < local_10) {
      do {
        iVar8 = (int)*param_4;
        psVar6 = psVar7;
        if (0 < iVar8) {
          do {
            psVar7 = psVar6 + 1;
            *psVar6 = *psVar4;
            iVar8 = iVar8 + -1;
            psVar6 = psVar7;
          } while (iVar8 != 0);
        }
        psVar4 = psVar4 + 1;
        param_4 = param_4 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      return;
    }
  }
  else if (0 < local_10) {
    local_c = param_4;
    do {
      sVar2 = *psVar4;
      if (sVar2 == sVar1) {
        psVar7 = psVar7 + *local_c;
      }
      else {
        uVar5 = (uint)*local_c;
        if (0 < (int)uVar5) {
          psVar6 = psVar7;
          for (uVar3 = uVar5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(uint *)psVar6 = CONCAT22(sVar2,sVar2);
            psVar6 = psVar6 + 2;
          }
          for (uVar3 = (uint)((uVar5 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
            *psVar6 = sVar2;
            psVar6 = psVar6 + 1;
          }
          psVar7 = psVar7 + uVar5;
        }
      }
      local_c = local_c + 1;
      psVar4 = psVar4 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


