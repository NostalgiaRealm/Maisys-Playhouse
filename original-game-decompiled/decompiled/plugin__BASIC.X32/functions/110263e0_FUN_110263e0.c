
/* ==== FUN_110263e0 @ 110263e0 ==== 
 * signature: undefined __cdecl FUN_110263e0(int param_1, int param_2, short * param_3, int param_4)
 * body: 110263e0-11026479
 */

void __cdecl FUN_110263e0(int param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 4);
  psVar5 = *(short **)(param_1 + 0x1c);
  psVar6 = *(short **)(param_2 + 0x1c);
  sVar1 = *param_3;
  if (*(int *)(param_3 + 8) == 0) {
    if (0 < iVar3) {
      do {
        iVar2 = (int)*(short *)(param_4 + iVar4 * 2);
        if (0 < iVar2) {
          iVar3 = iVar3 - iVar2;
          do {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
            *psVar6 = sVar1;
            psVar6 = psVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = (int)*(short *)(param_4 + (iVar4 + 1) * 2);
        iVar3 = iVar3 - iVar2;
        iVar4 = iVar4 + 2;
        psVar5 = psVar5 + iVar2;
      } while (0 < iVar3);
      return;
    }
  }
  else {
    for (; 0 < iVar3; iVar3 = iVar3 - iVar2) {
      iVar2 = (int)*(short *)(param_4 + iVar4 * 2);
      if (0 < iVar2) {
        iVar3 = iVar3 - iVar2;
        do {
          if (sVar1 != *psVar5) {
            *psVar6 = *psVar5;
          }
          psVar6 = psVar6 + 1;
          psVar5 = psVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (int)*(short *)(param_4 + (iVar4 + 1) * 2);
      iVar4 = iVar4 + 2;
      psVar5 = psVar5 + iVar2;
    }
  }
  return;
}


