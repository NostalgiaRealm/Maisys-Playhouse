
/* ==== FUN_11022430 @ 11022430 ==== 
 * signature: char __cdecl FUN_11022430(undefined4 * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * body: 11022430-110226bf
 */

char __cdecl FUN_11022430(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  void *_Dst;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  short local_2a;
  int local_24 [9];
  
  sVar1 = *(short *)(param_2 + 0xcc);
  FUN_1100fd70(param_1,param_4,local_24);
  puVar13 = (uint *)(param_2 + 0xc);
  cVar4 = FUN_110062b0(puVar13,'\a');
  cVar5 = FUN_110062b0(puVar13,'\t');
  bVar3 = false;
  bVar2 = false;
  cVar6 = FUN_110062b0(puVar13,'\b');
  cVar7 = FUN_1100fcf0(param_1,param_3,param_4,0,0);
  local_2a = -1;
  piVar8 = (int *)(param_2 + 0xd0);
  if (*piVar8 != 0) {
    iVar9 = FUN_11002840(param_1,*piVar8);
    bVar2 = bVar3;
    if (((sVar1 != 0) && (iVar9 != 0)) && (sVar11 = 0, 0 < sVar1)) {
      do {
        if (*(int *)(sVar11 * 0x24 + iVar9) == local_24[0]) {
          local_2a = sVar11;
          bVar2 = true;
          break;
        }
        sVar11 = sVar11 + 1;
      } while (sVar11 < sVar1);
    }
    FUN_110028a0(param_1,*piVar8);
  }
  if (cVar6 == '\0') {
    if (cVar4 == '\0') goto LAB_11022690;
    if (cVar5 != '\0') goto LAB_11022528;
  }
  else {
LAB_11022528:
    if (cVar7 == '\0') {
LAB_110225d5:
      if (bVar2) {
        iVar9 = (int)sVar1;
        iVar12 = (int)local_2a;
        if ((iVar12 < iVar9 + -1) && (iVar10 = FUN_11002840(param_1,*piVar8), iVar10 != 0)) {
          _Dst = (void *)(iVar12 * 0x24 + iVar10);
          FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x24),(iVar9 - iVar12) * 0x24 - 0x24);
          FUN_110028a0(param_1,*piVar8);
        }
        *(short *)(param_2 + 0xcc) = *(short *)(param_2 + 0xcc) + -1;
        FUN_11002780(param_1,piVar8,(iVar9 * 4 + -4) * 9);
      }
    }
    else if (bVar2) {
      if (cVar7 == '\0') goto LAB_110225d5;
    }
    else {
      if (*piVar8 == 0) {
        iVar9 = FUN_110026d0(param_1,0x24);
        *piVar8 = iVar9;
      }
      if (*piVar8 != 0) {
        FUN_11002780(param_1,piVar8,(sVar1 * 4 + 4) * 9);
        iVar9 = FUN_11002840(param_1,*piVar8);
        if (iVar9 != 0) {
          piVar14 = local_24;
          piVar15 = (int *)(sVar1 * 0x24 + iVar9);
          for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
            *piVar15 = *piVar14;
            piVar14 = piVar14 + 1;
            piVar15 = piVar15 + 1;
          }
          *(short *)(param_2 + 0xcc) = *(short *)(param_2 + 0xcc) + 1;
          FUN_110028a0(param_1,*piVar8);
        }
      }
    }
  }
  if (cVar4 != '\0') {
    if (cVar5 == '\0') {
      return cVar7;
    }
    if ((cVar7 != '\0') && (!bVar2)) {
      return '\x01';
    }
    return '\0';
  }
LAB_11022690:
  if (cVar6 == '\0') {
    return '\0';
  }
  if ((cVar7 == '\0') && (bVar2)) {
    return '\x01';
  }
  return '\0';
}


