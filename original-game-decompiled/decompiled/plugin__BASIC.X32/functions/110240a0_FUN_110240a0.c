
/* ==== FUN_110240a0 @ 110240a0 ==== 
 * signature: undefined __cdecl FUN_110240a0(undefined4 * param_1, int param_2, int param_3)
 * body: 110240a0-11024275
 */

void __cdecl FUN_110240a0(undefined4 *param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int *piVar8;
  
  psVar1 = *(short **)(param_3 + 4);
  if (*(int *)(param_3 + 0x32) != 0) {
    if (*(short *)(param_2 + 0x22) == 1) {
      FUN_11002780(param_1,(undefined4 *)(param_3 + 0x32),0x20);
      *(undefined4 *)(param_3 + 0x36) = 4;
      piVar6 = (int *)FUN_11002840(param_1,*(undefined4 *)(param_3 + 0x32));
      *piVar6 = (int)*psVar1;
      piVar6[1] = (int)psVar1[1];
      piVar6[2] = (int)psVar1[2];
      piVar6[3] = (int)psVar1[1];
      piVar6[4] = (int)psVar1[2];
      piVar6[5] = (int)psVar1[3];
      piVar6[6] = (int)*psVar1;
      piVar6[7] = (int)psVar1[3];
      FUN_110028a0(param_1,*(undefined4 *)(param_3 + 0x32));
      return;
    }
    if (*(short *)(param_2 + 0x22) != 9) {
      return;
    }
    if (*(int *)(param_2 + 0x58) != 0) {
      if ((((int)psVar1[3] - (int)*(short *)(param_2 + 0x62)) + (int)*(short *)(param_2 + 0x5e) ==
           (int)psVar1[1]) &&
         (((int)psVar1[2] - (int)*(short *)(param_2 + 0x60)) + (int)*(short *)(param_2 + 0x5c) ==
          (int)*psVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      FUN_11002780(param_1,(undefined4 *)(param_3 + 0x32),(int)*(short *)(param_2 + 0x56) << 3);
      *(int *)(param_3 + 0x36) = (int)*(short *)(param_2 + 0x56);
      iVar4 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 0x58));
      sVar7 = 0;
      iVar5 = FUN_11002840(param_1,*(undefined4 *)(param_3 + 0x32));
      if (0 < *(short *)(param_2 + 0x56)) {
        do {
          piVar8 = (int *)(iVar5 + sVar7 * 8);
          piVar6 = (int *)(sVar7 * 8 + iVar4);
          iVar2 = piVar6[1];
          *piVar8 = *piVar6;
          piVar8[1] = iVar2;
          if (bVar3) {
            FUN_11024280(piVar8,(short *)(param_2 + 0x5c),psVar1);
          }
          sVar7 = sVar7 + 1;
          *piVar8 = *piVar8 + (int)*psVar1;
          piVar8[1] = piVar8[1] + (int)psVar1[1];
        } while (sVar7 < *(short *)(param_2 + 0x56));
      }
      FUN_110028a0(param_1,*(undefined4 *)(param_3 + 0x32));
      FUN_110028a0(param_1,*(undefined4 *)(param_2 + 0x58));
    }
  }
  return;
}


