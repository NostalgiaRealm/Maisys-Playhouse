
/* ==== FUN_004514c0 @ 004514c0 ==== 
 * signature: void * __stdcall FUN_004514c0(void)
 * body: 004514c0-004518ad;004518e3-00451902
 */

void * FUN_004514c0(void)

{
  HANDLE pvVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  char local_534 [256];
  DWORD local_434 [5];
  char local_420 [260];
  CFileDialog local_31c [96];
  undefined4 local_2bc;
  undefined4 local_2b4;
  int local_2ac;
  char *local_2a4;
  undefined4 local_290;
  uint local_28c;
  char local_124 [256];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004518ce;
  *unaff_FS_OFFSET = &local_10;
  iVar7 = 0;
  FUN_0040f070(local_124);
  uVar4 = 0xffffffff;
  pcVar8 = (char *)&DAT_004dafd4;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar3 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = local_124;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar3 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_004dbc5c;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar3 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = local_124;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar3 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  pvVar1 = __findfirst(local_124,local_434);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_0040f070(local_124);
    uVar4 = 0xffffffff;
    pcVar8 = (char *)&DAT_004dafd4;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar3 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = local_124;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar3 != '\0');
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_004dbc54;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar3 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = local_124;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar3 != '\0');
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pvVar1 = __findfirst(local_124,local_434);
    if (pvVar1 == (HANDLE)0xffffffff) {
      FUN_0040f070(local_124);
      uVar4 = 0xffffffff;
      pcVar8 = (char *)&DAT_004dbc4c;
      do {
        pcVar10 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar8 + 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar3 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar8 = local_124;
      do {
        pcVar9 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar8 + 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar3 != '\0');
      pcVar8 = pcVar10 + -uVar4;
      pcVar10 = pcVar9 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pvVar1 = __findfirst(local_124,local_434);
      cVar3 = '\x01' - (pvVar1 == (HANDLE)0xffffffff);
      goto LAB_0045167e;
    }
  }
  cVar3 = '\x01';
LAB_0045167e:
  if (cVar3 != '\0') {
    FUN_004905d0(pvVar1);
    FUN_0040f070(local_124);
    uVar4 = 0xffffffff;
    pcVar8 = local_420;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar3 != '\0');
    uVar4 = ~uVar4;
    iVar7 = -1;
    pcVar8 = local_124;
    do {
      pcVar9 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar3 != '\0');
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar7 = FUN_00411a10(local_124,'\x01');
  }
  if (iVar7 == 0) {
    CFileDialog::CFileDialog(local_31c,1,(char *)0x0,(char *)0x0,6,(char *)0x0,(CWnd *)0x0);
    local_8 = 0;
    FUN_004abb44(&local_1c);
    local_8._0_1_ = 1;
    local_534[0] = '\0';
    CString::LoadStringA((CString *)&local_1c,0xf000);
    local_28c = local_28c | 0x1000;
    FUN_004abb44(&local_14);
    local_8._0_1_ = 2;
    FUN_004abb44(&local_20);
    local_8._0_1_ = 3;
    FUN_004abb44(&local_24);
    local_8 = CONCAT31(local_8._1_3_,4);
    CString::operator+=((CString *)&local_14,s_mPlayer_Files_004dbc3c);
    CString::operator+=((CString *)&local_14,'\0');
    CString::operator+=((CString *)&local_14,(char *)&DAT_004dafd4);
    CString::operator+=((CString *)&local_14,&DAT_004dbc5c);
    CString::operator+=((CString *)&local_14,';');
    CString::operator+=((CString *)&local_14,(char *)&DAT_004dafd4);
    CString::operator+=((CString *)&local_14,&DAT_004dbc54);
    CString::operator+=((CString *)&local_14,s____mpl_004dbc34);
    CString::operator+=((CString *)&local_14,'\0');
    local_2ac = local_2ac + 1;
    local_2b4 = local_14;
    iVar7 = FUN_004a7052();
    iVar5 = 0;
    if (iVar7 != 0) {
      piVar2 = (int *)FUN_004a7052();
      iVar5 = (**(code **)(*piVar2 + 0x78))();
    }
    if (iVar5 == 0) {
      local_2bc = 0;
    }
    else {
      local_2bc = *(undefined4 *)(iVar5 + 0x1c);
    }
    local_2a4 = local_534;
    local_290 = local_1c;
    iVar7 = CFileDialog::DoModal(local_31c);
    if (iVar7 == 1) {
      local_18 = (void *)FUN_00451960(local_18,local_534);
      local_8._0_1_ = 3;
      FUN_004518ae();
      local_8._0_1_ = 2;
      FUN_004518b6();
      local_8._0_1_ = 1;
      FUN_004518be();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004518c6();
      local_8 = 0xffffffff;
      FUN_004518d8();
    }
    else {
      local_8._0_1_ = 3;
      FUN_004518ae();
      local_8._0_1_ = 2;
      FUN_004518b6();
      local_8._0_1_ = 1;
      FUN_004518be();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004518c6();
      local_8 = 0xffffffff;
      FUN_004518d8();
      local_18 = (void *)0x0;
    }
  }
  else {
    local_18 = (void *)FUN_00451960(local_18,local_124);
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


