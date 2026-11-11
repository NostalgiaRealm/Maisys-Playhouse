
/* ==== FUN_00401539 @ 00401539 ==== 
 * signature: undefined4 __cdecl FUN_00401539(int param_1, uint param_2, int param_3, uint param_4)
 * body: 00401539-004017bf
 */

undefined4 __cdecl FUN_00401539(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *(ushort *)(&DAT_00404158 + param_2 * 2);
  uVar3 = *(ushort *)(&DAT_00404158 + param_4 * 2);
  local_10 = DAT_00404384;
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  while( true ) {
    while( true ) {
      if (DAT_004042bc != 0) {
        return 0xffffffff;
      }
      FUN_00401d3d(param_2,&local_8,&local_c);
      piVar8 = (int *)(param_1 + (local_8 & uVar2) * 8);
      bVar1 = *(byte *)(param_1 + 7 + (local_8 & uVar2) * 8);
      while (uVar5 = (uint)bVar1, 0x10 < uVar5) {
        if (uVar5 == 0xff) {
          return 0xffffffff;
        }
        FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
        FUN_00401d3d(uVar5 - 0x10,&local_8,&local_c);
        iVar4 = *piVar8;
        piVar8 = (int *)(iVar4 + (*(ushort *)(&DAT_00404158 + (uVar5 - 0x10) * 2) & local_8) * 8);
        bVar1 = *(byte *)(iVar4 + 7 +
                         (*(ushort *)(&DAT_00404158 + (uVar5 - 0x10) * 2) & local_8) * 8);
      }
      FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
      if (uVar5 != 0x10) break;
      uVar5 = local_10 + 1;
      *(char *)(local_10 + DAT_0040436c) = (char)piVar8[1];
      local_10 = uVar5;
      if (uVar5 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        local_10 = 0;
      }
    }
    if (uVar5 == 0xf) break;
    FUN_00401d3d(uVar5,&local_8,&local_c);
    uVar7 = (*(ushort *)(&DAT_00404158 + uVar5 * 2) & local_8) + (uint)*(ushort *)(piVar8 + 1);
    FUN_00401d89(uVar5,&local_8,(int *)&local_c);
    FUN_00401d3d(param_4,&local_8,&local_c);
    uVar5 = local_8 & uVar3;
    iVar4 = param_3;
    while( true ) {
      uVar6 = (uint)*(byte *)(iVar4 + 7 + uVar5 * 8);
      piVar8 = (int *)(iVar4 + uVar5 * 8);
      if (uVar6 < 0x11) break;
      if (uVar6 == 0xff) {
        return 0xffffffff;
      }
      FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
      FUN_00401d3d(uVar6 - 0x10,&local_8,&local_c);
      iVar4 = *piVar8;
      uVar5 = *(ushort *)(&DAT_00404158 + (uVar6 - 0x10) * 2) & local_8;
    }
    FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
    FUN_00401d3d(uVar6,&local_8,&local_c);
    local_14 = (local_10 - (*(ushort *)(&DAT_00404158 + uVar6 * 2) & local_8)) -
               (uint)*(ushort *)(piVar8 + 1);
    FUN_00401d89(uVar6,&local_8,(int *)&local_c);
    do {
      local_14 = local_14 & 0x7fff;
      uVar5 = local_10;
      if (local_10 < local_14) {
        uVar5 = local_14;
      }
      uVar6 = 0x8000 - uVar5;
      if (uVar7 < 0x8000 - uVar5) {
        uVar6 = uVar7;
      }
      uVar7 = uVar7 - uVar6;
      do {
        *(undefined1 *)(local_10 + DAT_0040436c) = *(undefined1 *)(local_14 + DAT_0040436c);
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (local_10 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        local_10 = 0;
      }
    } while (uVar7 != 0);
  }
  DAT_00404384 = local_10;
  DAT_0040439c = local_c;
  DAT_004043ac = local_8;
  return 0;
}


