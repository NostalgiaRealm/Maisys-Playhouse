
/* ==== FUN_110226c0 @ 110226c0 ==== 
 * signature: undefined __cdecl FUN_110226c0(undefined4 * param_1, short * param_2, int param_3)
 * body: 110226c0-11022820
 */

void __cdecl FUN_110226c0(undefined4 *param_1,short *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int *piVar9;
  int *piVar10;
  short local_2a;
  int local_24 [9];
  
  if ((*(short *)(param_3 + 0xcc) != 0) && (*(int *)(param_3 + 0xd0) != 0)) {
    cVar3 = FUN_110062b0((uint *)(param_3 + 0xc),'\n');
    bVar2 = false;
    iVar5 = FUN_11002840(param_1,*(undefined4 *)(param_3 + 0xd0));
    iVar6 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 2));
    local_2a = 0;
    if (0 < *(short *)(param_3 + 0xcc)) {
      do {
        piVar9 = (int *)(iVar5 + local_2a * 0x24);
        piVar10 = local_24;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        sVar8 = 0;
        bVar1 = false;
        if (0 < *param_2) {
          do {
            if (*(int *)(sVar8 * 0x24 + iVar6) == local_24[0]) {
              bVar1 = true;
              break;
            }
            sVar8 = sVar8 + 1;
          } while (sVar8 < *param_2);
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
      } while (local_2a < *(short *)(param_3 + 0xcc));
    }
    FUN_110028a0(param_1,*(undefined4 *)(param_3 + 0xd0));
    FUN_110028a0(param_1,*(undefined4 *)(param_2 + 2));
  }
  return;
}


