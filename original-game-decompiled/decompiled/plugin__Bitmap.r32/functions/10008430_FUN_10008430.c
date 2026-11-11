
/* ==== FUN_10008430 @ 10008430 ==== 
 * signature: int __cdecl FUN_10008430(int param_1)
 * body: 10008430-100085c1
 */

int __cdecl FUN_10008430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 local_4;
  
  iVar2 = DAT_10016ed0;
  iVar5 = DAT_10016ed0 * 2;
  if (param_1 != 0) {
    DAT_10016ea4 = DAT_10016ee8;
    DAT_10016ef0 = DAT_10016f10 + -1;
    DAT_10016f0c = 0;
    DAT_10016ef4 = DAT_10016f1c;
  }
  iVar3 = DAT_10016ef0;
  param_1 = 0;
  iVar6 = DAT_10016ef4;
  uVar9 = DAT_10016ec8;
  puVar8 = DAT_10016ec4;
  puVar7 = DAT_10016f20;
  for (iVar4 = DAT_10016ea4; iVar4 <= DAT_10016ef0; iVar4 = iVar4 + 1) {
    if (uVar9 < *puVar8) {
      if (DAT_10016ea4 < iVar4) {
        DAT_10016ea4 = iVar4;
        DAT_10016ec4 = puVar8;
        DAT_10016ec8 = uVar9;
        DAT_10016ef4 = iVar6;
        DAT_10016f20 = puVar7;
      }
      param_1 = 1;
      break;
    }
    puVar8 = puVar8 + 1;
    uVar9 = uVar9 + iVar6;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + iVar5;
  }
  local_4 = (undefined1)DAT_10016ec0;
  iVar1 = DAT_10016f0c;
  while ((DAT_10016f0c = iVar1, iVar4 <= iVar3 && (uVar9 < *puVar8))) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    uVar9 = uVar9 + iVar6;
    iVar6 = iVar6 + iVar5;
    iVar1 = DAT_10016f0c;
  }
  puVar8 = DAT_10016ec4 + -1;
  iVar5 = DAT_10016ef4 + iVar2 * -2;
  puVar7 = DAT_10016f20 + -1;
  iVar4 = DAT_10016ea4 + -1;
  uVar9 = DAT_10016ec8 - iVar5;
  if (param_1 == 0) {
    if (iVar4 < iVar1) {
      return 0;
    }
    do {
      if (uVar9 < *puVar8) {
        param_1 = 1;
        DAT_10016ea4 = iVar4;
        DAT_10016ec4 = puVar8;
        DAT_10016ec8 = uVar9;
        DAT_10016ef4 = iVar5;
        DAT_10016f20 = puVar7;
        break;
      }
      iVar5 = iVar5 + iVar2 * -2;
      iVar4 = iVar4 + -1;
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      uVar9 = uVar9 - iVar5;
    } while (iVar1 <= iVar4);
  }
  for (; (iVar1 <= iVar4 && (uVar9 < *puVar8)); uVar9 = uVar9 - iVar5) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar5 = iVar5 + iVar2 * -2;
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  }
  return param_1;
}


