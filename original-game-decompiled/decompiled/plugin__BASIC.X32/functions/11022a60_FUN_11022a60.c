
/* ==== FUN_11022a60 @ 11022a60 ==== 
 * signature: undefined __cdecl FUN_11022a60(undefined4 * param_1, undefined4 param_2, short * param_3)
 * body: 11022a60-11022ba7
 */

void __cdecl FUN_11022a60(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar8;
  undefined4 local_48 [7];
  int local_2a;
  int local_24 [9];
  
  iVar1 = FUN_11002840(param_1,*(undefined4 *)(param_3 + 2));
  iVar2 = FUN_11006330(param_1,1);
  puVar8 = local_48;
  uVar3 = FUN_1100fc30((int)param_1);
  FUN_1100fb90(param_1,uVar3,puVar8);
  iVar6 = local_2a;
  while ((iVar6 != 0 && (iVar2 != iVar6))) {
    local_2a = iVar6;
    FUN_1100fd70(param_1,iVar6,local_24);
    sVar5 = 0;
    if (0 < *param_3) {
      do {
        piVar4 = (int *)(sVar5 * 0x24 + iVar1);
        if (*piVar4 == local_24[0]) {
          *piVar4 = 0;
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 < *param_3);
    }
    FUN_1100fb90(param_1,iVar6,local_48);
    iVar6 = local_2a;
  }
  sVar5 = *param_3;
  sVar7 = 0;
  if (0 < sVar5) {
    do {
      iVar6 = (int)sVar7;
      piVar4 = (int *)(iVar6 * 0x24 + iVar1);
      if (*piVar4 == 0) {
        if (iVar6 < *param_3 + -1) {
          FID_conflict__memcpy(piVar4,piVar4 + 9,(*param_3 - iVar6) * 0x24 - 0x24);
        }
        sVar7 = sVar7 + -1;
        *param_3 = *param_3 + -1;
      }
      sVar7 = sVar7 + 1;
    } while (sVar7 < *param_3);
  }
  FUN_110028a0(param_1,*(undefined4 *)(param_3 + 2));
  if (sVar5 != *param_3) {
    FUN_11002780(param_1,(undefined4 *)(param_3 + 2),*param_3 * 0x24);
  }
  return;
}


