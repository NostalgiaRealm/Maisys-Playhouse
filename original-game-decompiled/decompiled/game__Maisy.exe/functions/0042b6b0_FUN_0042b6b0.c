
/* ==== FUN_0042b6b0 @ 0042b6b0 ==== 
 * signature: undefined1 __cdecl FUN_0042b6b0(int param_1, int * param_2, char * param_3, char param_4)
 * body: 0042b6b0-0042b960;0042b969-0042b9bc
 */

undefined1 __cdecl FUN_0042b6b0(int param_1,int *param_2,char *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CWnd *pCVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *unaff_FS_OFFSET;
  char local_348 [256];
  CFileDialog local_248 [136];
  int local_1c0;
  undefined2 local_50;
  int *local_4e;
  undefined4 local_24;
  undefined1 local_1d;
  int *local_1c;
  char *local_18;
  char local_11;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042b9c8;
  *unaff_FS_OFFSET = &local_10;
  local_11 = '\0';
  iVar3 = *(int *)(*(int *)(param_1 + 0x16) + 8);
  local_1c = (int *)FUN_0040c620(*(int **)(*(int *)(param_1 + 0x16) + 4));
  uVar2 = FUN_0043d430((char *)*param_2,s_Ask_User_004da448);
  if ((uVar2 == 0) || (param_4 != '\0')) {
    if (((*(byte *)(DAT_004da390 + 200) & 1) != 0) && (local_1c != (int *)0x0)) {
      local_50 = 0x6a;
      iVar3 = (**(code **)(*local_1c + 0x98))(s_cursorelement_004d9484,0,&local_50);
      if (iVar3 == 0) {
        (**(code **)(*local_4e + 0x358))(0,0);
        FUN_00407970(local_1c);
        local_11 = '\x01';
      }
    }
    iVar3 = 0;
    FUN_004abb44(&local_18);
    local_8 = 0;
    local_24 = DAT_004da434;
    CString::operator+=((CString *)&local_18,s_All_Files_______004da420);
    CString::operator+=((CString *)&local_18,'|');
    CString::operator+=((CString *)&local_18,(char *)&DAT_004da434);
    CString::operator+=((CString *)&local_18,'|');
    CString::operator+=((CString *)&local_18,'|');
    CString::operator+=((CString *)&local_18,'\0');
    pcVar9 = (char *)&local_24;
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      pcVar9 = param_3;
    }
    if (param_4 != '\0') {
      iVar3 = *param_2;
    }
    iVar4 = FUN_004a7052();
    pCVar5 = (CWnd *)0x0;
    if (iVar4 != 0) {
      piVar6 = (int *)FUN_004a7052();
      pCVar5 = (CWnd *)(**(code **)(*piVar6 + 0x78))();
    }
    CFileDialog::CFileDialog
              (local_248,(uint)((char)param_2[3] == '\0'),(char *)0x0,pcVar9,
               CONCAT31((uint3)(-(uint)((char)param_2[3] == '\0') >> 8) & 0x10,6),local_18,pCVar5);
    local_8._0_1_ = 1;
    if (iVar3 != 0) {
      local_1c0 = iVar3;
    }
    if (local_11 != '\0') {
      ShowCursor(1);
    }
    iVar3 = CFileDialog::DoModal(local_248);
    local_1d = iVar3 != 1;
    if (!(bool)local_1d) {
      puVar7 = (undefined4 *)CFileDialog::GetPathName(local_248);
      local_8._0_1_ = 2;
      _strncpy(param_3,(char *)*puVar7,0x100);
      local_8._0_1_ = 1;
      FUN_0042b961();
    }
    if (local_11 != '\0') {
      (**(code **)(*local_1c + 0x9c))(s_refreshcursor_004d9344,0,0);
      (**(code **)(*local_4e + 0x358))(1,0);
      ShowCursor(0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0042b9bd();
    local_8 = 0xffffffff;
    FUN_0042b9d2();
  }
  else {
    pcVar9 = (char *)*param_2;
    if ((*pcVar9 == ':') || (*pcVar9 == '<')) {
      iVar3 = FUN_0042bba0(iVar3,pcVar9,local_348);
      if (iVar3 != 0) {
        local_1d = 1;
        goto LAB_0042b734;
      }
      pcVar9 = local_348;
    }
    uVar2 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar9 = pcVar10 + -uVar2;
    pcVar10 = param_3;
    for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar9 = param_3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (param_3[~uVar2 - 2] != '\\') {
      uVar2 = 0xffffffff;
      pcVar9 = &DAT_004d99a4;
      do {
        pcVar10 = pcVar9;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar3 = -1;
      pcVar9 = param_3;
      do {
        pcVar11 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      pcVar9 = pcVar10 + -uVar2;
      pcVar10 = pcVar11 + -1;
      for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    uVar2 = 0xffffffff;
    pcVar9 = (char *)param_2[1];
    do {
      pcVar10 = pcVar9;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    do {
      pcVar9 = param_3;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -uVar2;
    pcVar9 = pcVar9 + -1;
    for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_1d = 0;
  }
LAB_0042b734:
  *unaff_FS_OFFSET = local_10;
  return local_1d;
}


