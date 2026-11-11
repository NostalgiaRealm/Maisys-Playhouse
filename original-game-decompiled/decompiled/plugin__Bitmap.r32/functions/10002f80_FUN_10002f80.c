
/* ==== FUN_10002f80 @ 10002f80 ==== 
 * signature: int __cdecl FUN_10002f80(int param_1, undefined4 * param_2)
 * body: 10002f80-1000310a
 */

int __cdecl FUN_10002f80(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  BOOL BVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  HWND *ppHVar8;
  void **ppvVar9;
  int local_25c;
  char local_258 [4];
  char local_254 [4];
  char local_250;
  tagOFNA local_24c [3];
  char local_100 [256];
  
  *param_2 = 0;
  iVar7 = 0x10000;
  if (*(short *)(param_1 + 0x10) == 0) {
    local_100[0] = '\0';
  }
  else {
    local_254[0] = s_<player>_10013120[4];
    local_254[1] = s_<player>_10013120[5];
    local_254[2] = s_<player>_10013120[6];
    local_254[3] = s_<player>_10013120[7];
    local_258[0] = s_<player>_10013120[0];
    local_258[1] = s_<player>_10013120[1];
    local_258[2] = s_<player>_10013120[2];
    local_258[3] = s_<player>_10013120[3];
    local_250 = s_<player>_10013120[8];
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,10,&local_25c);
    DAT_100173bc = (*pcVar2)(local_25c,param_1,local_258,&local_24c[0].pvReserved);
    FUN_10003110(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
    FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
  }
  if (*(short *)(param_1 + 0xc) != 0) {
    local_24c[0].lStructSize = 0x4c;
    ppHVar8 = &local_24c[0].hwndOwner;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppHVar8 = (HWND)0x0;
      ppHVar8 = ppHVar8 + 1;
    }
    local_24c[0].hwndOwner = GetActiveWindow();
    local_24c[0].lpstrFile = local_100;
    local_24c[0].lpstrFilter = s_Bitmap_files____bmp__100130f0;
    local_24c[0].nMaxFile = 0x100;
    local_24c[0].Flags = 0x200002;
    local_24c[0].lpstrDefExt = &DAT_100130ec;
    BVar3 = GetOpenFileNameA(local_24c);
    if (BVar3 == 0) goto LAB_100030b6;
  }
  pvVar4 = FUN_100060b0(local_100);
  *param_2 = pvVar4;
  if (pvVar4 != (LPVOID)0x0) {
    iVar7 = 0;
  }
LAB_100030b6:
  if (*(short *)(param_1 + 0x10) != 0) {
    if (iVar7 == 0) {
      FUN_10007bc0(local_100,(char *)&local_24c[0].pvReserved);
    }
    else {
      local_24c[0].pvReserved._0_1_ = 0;
    }
    uVar6 = 0xffffffff;
    ppvVar9 = &local_24c[0].pvReserved;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)ppvVar9;
      ppvVar9 = (void **)((int)ppvVar9 + 1);
    } while (cVar1 != '\0');
    FUN_10003290(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,~uVar6 - 1);
  }
  return iVar7;
}


