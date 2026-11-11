
/* ==== FUN_11022830 @ 11022830 ==== 
 * signature: undefined __cdecl FUN_11022830(undefined4 * param_1, short * param_2, int param_3)
 * body: 11022830-11022a51
 */

void __cdecl FUN_11022830(undefined4 *param_1,short *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  short local_2a;
  int local_24 [9];
  
  cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\n');
  bVar2 = false;
  if (*param_2 != 0) {
    cVar4 = FUN_110062b0((uint *)(param_3 + 0xc),'\t');
    if (((cVar4 != '\0') && (*(short *)(param_3 + 0xcc) != 0)) && (*(int *)(param_3 + 0xd0) != 0)) {
      iVar6 = FUN_11002840(param_1,*(int *)(param_3 + 0xd0));
      iVar7 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 2));
      local_2a = 0;
      if (0 < *param_2) {
        do {
          piVar9 = (int *)(iVar7 + local_2a * 0x24);
          piVar10 = local_24;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          sVar5 = 0;
          bVar1 = false;
          if (0 < *(short *)(param_3 + 0xcc)) {
            do {
              if (*(int *)(sVar5 * 0x24 + iVar6) == local_24[0]) {
                bVar1 = true;
                break;
              }
              sVar5 = sVar5 + 1;
            } while (sVar5 < *(short *)(param_3 + 0xcc));
          }
          if (!bVar1) {
            cVar4 = FUN_110062b0((uint *)(param_3 + 0xc),'\x06');
            if (cVar4 == '\0') {
              FUN_11022cd0(param_1,param_3);
              break;
            }
            if ((cVar3 == '\0') || (!bVar2)) {
              FUN_11022c40(param_1,param_3,0,(int)local_24);
              bVar2 = true;
            }
          }
          local_2a = local_2a + 1;
        } while (local_2a < *param_2);
      }
      FUN_110028a0(param_1,*(undefined4 *)(param_3 + 0xd0));
      FUN_110028a0(param_1,*(undefined4 *)(param_2 + 2));
      return;
    }
    cVar4 = FUN_110062b0((uint *)(param_3 + 0xc),'\x06');
    if (cVar4 == '\0') {
      FUN_11022cd0(param_1,param_3);
      return;
    }
    sVar5 = 0;
    iVar6 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 2));
    if (0 < *param_2) {
      do {
        if ((cVar3 == '\0') || (!bVar2)) {
          FUN_11022c40(param_1,param_3,0,sVar5 * 0x24 + iVar6);
          bVar2 = true;
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 < *param_2);
    }
    FUN_110028a0(param_1,*(undefined4 *)(param_2 + 2));
  }
  return;
}


