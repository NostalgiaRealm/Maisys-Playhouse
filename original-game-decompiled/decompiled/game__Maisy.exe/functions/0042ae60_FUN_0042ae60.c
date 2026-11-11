
/* ==== FUN_0042ae60 @ 0042ae60 ==== 
 * signature: char * __cdecl FUN_0042ae60(short param_1, short * param_2, short * param_3)
 * body: 0042ae60-0042af3a;0042af43-0042afbc;0042afc5-0042b0d7;0042b0fd-0042b111
 */

char * __cdecl FUN_0042ae60(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  CWnd *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar6;
  CFileDialog local_334 [140];
  char *local_2a8;
  char local_13c;
  undefined4 local_13b [67];
  undefined1 local_2f;
  undefined1 local_28 [4];
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042b0eb;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (char *)0x0;
  local_1c = (char *)0x0;
  local_13c = DAT_004d99e4;
  puVar4 = local_13b;
  for (iVar5 = 0x43; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  if ((param_1 < 0) || (2 < param_1)) {
    local_18 = (char *)0x10000;
    goto LAB_0042b102;
  }
  if (0 < param_1) {
    FUN_00458440(local_28,param_2);
    if (local_20 != (char *)0x0) {
      local_8 = 0xffffffff;
      local_18 = local_20;
      FUN_0042af3b();
      goto LAB_0042b102;
    }
    local_8 = 0xffffffff;
    local_1c = local_24;
    FUN_0042af3b();
  }
  if (param_1 == 2) {
    FUN_00458440(local_28,param_2 + 0x16);
    local_8 = 1;
    if (local_20 != (char *)0x0) {
      local_8 = 0xffffffff;
      local_18 = local_20;
      FUN_0042afbd();
      goto LAB_0042b102;
    }
    local_18 = FUN_0043b970(local_24);
    local_8 = 0xffffffff;
    FUN_0042afbd();
  }
  FUN_004abb44(&local_14);
  local_8 = 2;
  if (local_1c == (char *)0x0) {
LAB_0042afc5:
    CString::operator+=((CString *)&local_14,s_All_Files_______004da420);
    CString::operator+=((CString *)&local_14,'|');
    pcVar6 = (char *)&DAT_004da434;
  }
  else {
    iVar5 = -1;
    pcVar6 = local_1c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -5) goto LAB_0042afc5;
    CString::operator+=((CString *)&local_14,&DAT_004da430);
    CString::operator+=((CString *)&local_14,local_1c);
    CString::operator+=((CString *)&local_14,'|');
    CString::operator+=((CString *)&local_14,&DAT_004da430);
    pcVar6 = local_1c;
  }
  CString::operator+=((CString *)&local_14,pcVar6);
  CString::operator+=((CString *)&local_14,'|');
  CString::operator+=((CString *)&local_14,'|');
  CString::operator+=((CString *)&local_14,'\0');
  iVar5 = FUN_004a7052();
  pCVar2 = (CWnd *)0x0;
  if (iVar5 != 0) {
    piVar3 = (int *)FUN_004a7052();
    pCVar2 = (CWnd *)(**(code **)(*piVar3 + 0x78))();
  }
  CFileDialog::CFileDialog(local_334,1,(char *)0x0,(char *)0x0,0x1006,local_14,pCVar2);
  local_8._0_1_ = 3;
  if (local_18 != (char *)0x0) {
    local_2a8 = local_18;
  }
  iVar5 = CFileDialog::DoModal(local_334);
  if (iVar5 == 1) {
    puVar4 = (undefined4 *)CFileDialog::GetPathName(local_334);
    local_8._0_1_ = 4;
    _strncpy(&local_13c,(char *)*puVar4,0x10e);
    local_8._0_1_ = 3;
    FUN_0042b0d8();
    local_2f = 0;
  }
  local_1c = (char *)FUN_00454fa0(param_3,&local_13c);
  if (local_18 != (char *)0x0) {
    FUN_0043ba20(local_18);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0042b0e0();
  local_8 = 0xffffffff;
  FUN_0042b0f5();
  local_18 = local_1c;
LAB_0042b102:
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


