
/* ==== FUN_1400d7e0 @ 1400d7e0 ==== 
 * signature: LRESULT __stdcall FUN_1400d7e0(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * body: 1400d7e0-1400d991
 */

LRESULT FUN_1400d7e0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  char cVar1;
  LONG LVar2;
  LRESULT LVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int local_b0;
  int local_ac;
  uint local_a8 [2];
  undefined1 auStack_a0 [7];
  char cStack_99;
  undefined4 auStack_98 [34];
  WPARAM WStack_10;
  int iStack_c;
  undefined1 uStack_8;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  if (param_2 != 0x401) {
    if (param_2 == 0xc) {
      return 0;
    }
    LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar3;
  }
  local_ac = 0x30;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_b0);
  DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),local_a8);
  uVar8 = 1;
  if (local_a8[0] == 0) {
    return 0;
  }
  while( true ) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(local_ac + DAT_14028e44),1,6,&local_b0);
    DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),uVar8,auStack_a0);
    if (param_3 == WStack_10) break;
    uVar8 = uVar8 + 1;
    if (local_a8[0] < uVar8) {
      return 0;
    }
  }
  uStack_8 = 1;
  if ((short)((uint)param_4 >> 0x10) == 0) {
    pcVar5 = (char *)(*DAT_14026450)(*(undefined4 *)**(undefined4 **)(iStack_c + 0xc));
    uVar6 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = pcVar5;
    pcVar10 = (char *)auStack_98;
    for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)auStack_98 + (~uVar6 - 1)) = 0;
  }
  pcVar4 = (code *)FUN_14008ab0(*(int *)(local_ac + DAT_14028e44),1,7,&local_b0);
  DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),uVar8,auStack_a0);
  *(short *)(LVar2 + 0xe) = *(short *)(LVar2 + 0xe) + 1;
  return 0;
}


