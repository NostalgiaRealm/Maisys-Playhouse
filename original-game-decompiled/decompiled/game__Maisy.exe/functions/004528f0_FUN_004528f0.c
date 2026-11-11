
/* ==== FUN_004528f0 @ 004528f0 ==== 
 * signature: int __cdecl FUN_004528f0(int param_1)
 * body: 004528f0-00452aa5
 */

int __cdecl FUN_004528f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 local_18;
  undefined1 *local_c;
  int local_8;
  
  iVar4 = DAT_004e0398;
  iVar9 = DAT_004e0398 * 2;
  if (param_1 != 0) {
    DAT_004e036c = DAT_004e03b0;
    DAT_004e1bc0 = DAT_004e1be8;
    DAT_004e1bd8 = 0;
    DAT_004e0fb8 = DAT_004e1bdc + -1;
  }
  iVar5 = DAT_004e0fb8;
  iVar6 = 0;
  iVar2 = DAT_004e1bc0;
  puVar1 = DAT_004e1bec;
  uVar8 = DAT_004e0390;
  puVar7 = DAT_004e038c;
  for (iVar10 = DAT_004e036c; iVar10 <= DAT_004e0fb8; iVar10 = iVar10 + 1) {
    if (uVar8 < *puVar7) {
      if (DAT_004e036c < iVar10) {
        DAT_004e036c = iVar10;
        DAT_004e038c = puVar7;
        DAT_004e0390 = uVar8;
        DAT_004e1bc0 = iVar2;
        DAT_004e1bec = puVar1;
      }
      iVar6 = 1;
      break;
    }
    puVar7 = puVar7 + 1;
    uVar8 = uVar8 + iVar2;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + iVar9;
  }
  local_18 = (undefined1)DAT_004e0388;
  iVar3 = DAT_004e1bd8;
  while ((DAT_004e1bd8 = iVar3, iVar10 <= iVar5 && (uVar8 < *puVar7))) {
    *puVar7 = uVar8;
    iVar10 = iVar10 + 1;
    puVar7 = puVar7 + 1;
    *puVar1 = local_18;
    puVar1 = puVar1 + 1;
    uVar8 = uVar8 + iVar2;
    iVar3 = DAT_004e1bd8;
    iVar2 = iVar2 + iVar9;
  }
  iVar9 = DAT_004e036c + -1;
  local_8 = DAT_004e1bc0 + iVar4 * -2;
  uVar8 = DAT_004e0390 - local_8;
  local_c = DAT_004e1bec + -1;
  puVar7 = DAT_004e038c + -1;
  if (iVar6 == 0) {
    if (iVar9 < iVar3) {
      return 0;
    }
    do {
      if (uVar8 < *puVar7) {
        iVar6 = 1;
        DAT_004e036c = iVar9;
        DAT_004e038c = puVar7;
        DAT_004e0390 = uVar8;
        DAT_004e1bc0 = local_8;
        DAT_004e1bec = local_c;
        break;
      }
      iVar9 = iVar9 + -1;
      puVar7 = puVar7 + -1;
      local_c = local_c + -1;
      local_8 = local_8 + iVar4 * -2;
      uVar8 = uVar8 - local_8;
    } while (iVar3 <= iVar9);
  }
  for (; (iVar3 <= iVar9 && (uVar8 < *puVar7)); uVar8 = uVar8 - local_8) {
    *puVar7 = uVar8;
    iVar9 = iVar9 + -1;
    puVar7 = puVar7 + -1;
    *local_c = local_18;
    local_8 = local_8 + iVar4 * -2;
    local_c = local_c + -1;
  }
  return iVar6;
}


