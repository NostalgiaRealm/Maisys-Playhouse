
/* ==== FUN_1100eac0 @ 1100eac0 ==== 
 * signature: int __cdecl FUN_1100eac0(int param_1)
 * body: 1100eac0-1100ec4c
 */

int __cdecl FUN_1100eac0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_8;
  
  iVar2 = DAT_11037f90;
  iVar7 = DAT_11037f90 * 2;
  if (param_1 != 0) {
    DAT_11037f64 = DAT_11037fa8;
    DAT_110397b8 = DAT_110397e0;
    DAT_110397d0 = 0;
    DAT_11038bb0 = DAT_110397d4 + -1;
  }
  iVar3 = DAT_11038bb0;
  iVar4 = 0;
  iVar6 = DAT_110397b8;
  uVar10 = DAT_11037f88;
  puVar5 = DAT_11037f84;
  puVar9 = DAT_110397e4;
  for (iVar8 = DAT_11037f64; iVar8 <= DAT_11038bb0; iVar8 = iVar8 + 1) {
    if (uVar10 < *puVar5) {
      if (DAT_11037f64 < iVar8) {
        DAT_11037f64 = iVar8;
        DAT_11037f84 = puVar5;
        DAT_11037f88 = uVar10;
        DAT_110397b8 = iVar6;
        DAT_110397e4 = puVar9;
      }
      iVar4 = 1;
      break;
    }
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
    uVar10 = uVar10 + iVar6;
    iVar6 = iVar6 + iVar7;
  }
  local_8 = (undefined1)DAT_11037f80;
  iVar1 = DAT_110397d0;
  while ((DAT_110397d0 = iVar1, iVar8 <= iVar3 && (uVar10 < *puVar5))) {
    *puVar5 = uVar10;
    *puVar9 = local_8;
    iVar8 = iVar8 + 1;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
    uVar10 = uVar10 + iVar6;
    iVar6 = iVar6 + iVar7;
    iVar1 = DAT_110397d0;
  }
  iVar6 = DAT_11037f64 + -1;
  iVar7 = DAT_110397b8 + iVar2 * -2;
  uVar10 = DAT_11037f88 - iVar7;
  puVar9 = DAT_110397e4 + -1;
  puVar5 = DAT_11037f84 + -1;
  if (iVar4 == 0) {
    if (iVar6 < iVar1) {
      return 0;
    }
    do {
      if (uVar10 < *puVar5) {
        iVar4 = 1;
        DAT_11037f64 = iVar6;
        DAT_11037f84 = puVar5;
        DAT_11037f88 = uVar10;
        DAT_110397b8 = iVar7;
        DAT_110397e4 = puVar9;
        break;
      }
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + -1;
      puVar9 = puVar9 + -1;
      iVar7 = iVar7 + iVar2 * -2;
      uVar10 = uVar10 - iVar7;
    } while (iVar1 <= iVar6);
  }
  for (; (iVar1 <= iVar6 && (uVar10 < *puVar5)); uVar10 = uVar10 - iVar7) {
    *puVar5 = uVar10;
    *puVar9 = local_8;
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + -1;
    puVar9 = puVar9 + -1;
    iVar7 = iVar7 + iVar2 * -2;
  }
  return iVar4;
}


