
/* ==== FUN_10005060 @ 10005060 ==== 
 * signature: int __cdecl FUN_10005060(int param_1, int * param_2)
 * body: 10005060-100051cd
 */

int __cdecl FUN_10005060(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  HWND *ppHVar7;
  void **ppvVar8;
  tagOFNA local_24c [3];
  char local_100 [256];
  
  iVar6 = 0;
  if (*(short *)(param_1 + 0x38) == 0) {
    if (*(short *)(param_1 + 0x3c) == 0) {
      FUN_10007960(s_image_1001316c,local_100);
    }
    else {
      FUN_100051d0(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
      FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x3c);
    local_24c[0].lStructSize = 0x4c;
    ppHVar7 = &local_24c[0].hwndOwner;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppHVar7 = (HWND)0x0;
      ppHVar7 = ppHVar7 + 1;
    }
    if (sVar2 == 0) {
      local_100[0] = '\0';
    }
    else {
      FUN_100051d0(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,0x100);
      FUN_100079f0((char *)&local_24c[0].pvReserved,local_100);
    }
    local_24c[0].hwndOwner = GetActiveWindow();
    local_24c[0].lpstrFile = local_100;
    local_24c[0].lpstrFilter = s_Bitmap_files____bmp__100130f0;
    local_24c[0].nMaxFile = 0x100;
    local_24c[0].Flags = 0x200002;
    local_24c[0].lpstrDefExt = &DAT_100130ec;
    BVar3 = GetSaveFileNameA(local_24c);
    if (BVar3 == 0) goto LAB_1000517a;
  }
  iVar4 = FUN_10006190(param_2,local_100);
  if (iVar4 != 0) {
    iVar6 = 1;
  }
LAB_1000517a:
  if (*(short *)(param_1 + 0x3c) != 0) {
    if (iVar6 == 0) {
      local_24c[0].pvReserved._0_1_ = 0;
    }
    else {
      FUN_10007bc0(local_100,(char *)&local_24c[0].pvReserved);
    }
    uVar5 = 0xffffffff;
    ppvVar8 = &local_24c[0].pvReserved;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)ppvVar8;
      ppvVar8 = (void **)((int)ppvVar8 + 1);
    } while (cVar1 != '\0');
    FUN_10005350(param_1,*(short **)(param_1 + 0x6a),&local_24c[0].pvReserved,~uVar5 - 1);
  }
  return iVar6;
}


