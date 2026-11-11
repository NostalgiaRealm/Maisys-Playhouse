
/* ==== FUN_11026330 @ 11026330 ==== 
 * signature: undefined __cdecl FUN_11026330(int param_1, int param_2, short * param_3, short * param_4)
 * body: 11026330-110263db
 */

void __cdecl FUN_11026330(int param_1,int param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int local_4;
  
  local_4 = *(int *)(param_1 + 4);
  psVar4 = *(short **)(param_1 + 0x1c);
  psVar7 = *(short **)(param_2 + 0x1c);
  sVar1 = *param_3;
  if (*(int *)(param_3 + 8) == 0) {
    if (0 < local_4) {
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
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      return;
    }
  }
  else if (0 < local_4) {
    do {
      sVar2 = *psVar4;
      if (sVar1 == sVar2) {
        psVar7 = psVar7 + *param_4;
      }
      else {
        uVar5 = (uint)*param_4;
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
      psVar4 = psVar4 + 1;
      param_4 = param_4 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


