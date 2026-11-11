
/* ==== FUN_0040f1a0 @ 0040f1a0 ==== 
 * signature: undefined4 __fastcall FUN_0040f1a0(void * param_1)
 * body: 0040f1a0-0040f2c5;0040f2de-0040f629
 */

undefined4 __fastcall FUN_0040f1a0(void *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  HWND hWnd;
  undefined4 uVar4;
  undefined4 *this;
  DWORD DVar5;
  byte *pbVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  undefined4 *unaff_FS_OFFSET;
  bool bVar14;
  _MEMORYSTATUS local_70;
  CCommandLineInfo local_50 [36];
  int local_2c;
  tagRECT local_28;
  CMDIFrameWnd *local_18;
  CMDIFrameWnd *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040f653;
  *unaff_FS_OFFSET = &local_10;
  hWnd = FindWindowA((LPCSTR)0x0,s_mPlayer___mTropolis_Windows_Play_004d99e8);
  if (hWnd == (HWND)0x0) {
    DAT_004d99ac = FUN_00434970();
    FUN_00447f20();
    GetPrivateProfileStringA
              (s_DrawDib_004d99c8,&DAT_004d99d0,&DAT_004d99e4,&DAT_004e00c0,0x14,s_win_ini_004d99d4)
    ;
    WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,s_win_ini_004d99d4);
    WritePrivateProfileStringA(s_DrawDib_004d99c8,&DAT_004d99d0,&DAT_004d99e0,s_win_ini_004d99d4);
    FUN_00451f80();
    FUN_00451fa0();
    FUN_00429450();
    if (DAT_004da054 != 0) {
      this = FUN_00412c20(0xb2);
      local_8 = 0;
      local_14 = (CMDIFrameWnd *)this;
      if (this == (undefined4 *)0x0) {
        DAT_004dc564 = (undefined4 *)0x0;
      }
      else {
        FUN_00412c90(this,0);
        *this = &PTR_FUN_004be4b8;
        local_8 = CONCAT31((int3)((uint)local_8 >> 8),3);
        *this = &PTR_FUN_004be3b0;
        FUN_00411680((undefined4 *)((int)this + 0x5e));
        FUN_00411680((undefined4 *)((int)this + 0x6e));
        FUN_00411680((undefined4 *)((int)this + 0x7e));
        *this = &PTR_FUN_004be2a0;
        DAT_004dc564 = this;
      }
      local_8 = 0xffffffff;
      FUN_0046e590(DAT_004dc564);
      FUN_00434d60();
      FUN_00481e40();
      DVar5 = timeGetTime();
      FUN_0048ea60((DVar5 * 6) / 100);
      FUN_0040fcd0();
      FUN_0040fd30();
      FUN_00434670();
      CCommandLineInfo::CCommandLineInfo(local_50);
      local_8 = 4;
      FUN_004ba13c((int *)local_50);
      pbVar12 = *(byte **)((int)param_1 + 0x68);
      if (*pbVar12 != 0) {
        pbVar6 = &DAT_004d99dc;
        do {
          bVar1 = *pbVar12;
          bVar14 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0040f371:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0040f376;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar14 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0040f371;
          pbVar12 = pbVar12 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_0040f376:
        if (iVar7 == 0) {
          *(undefined4 *)((int)param_1 + 0xd0) = 1;
        }
      }
      local_14 = (CMDIFrameWnd *)FUN_004a5fed(0x8c);
      local_8._0_1_ = 5;
      if (local_14 != (CMDIFrameWnd *)0x0) {
        CMultiDocTemplate::CMultiDocTemplate
                  ((CMultiDocTemplate *)local_14,2,(CRuntimeClass *)&PTR_s_CMFDoc_004dbc18,
                   (CRuntimeClass *)&PTR_s_CMFPlatformWindow_004dc1a8,
                   (CRuntimeClass *)&PTR_s_CMFRootPlatformPane_004dcf80);
      }
      local_8._0_1_ = 4;
      FUN_004b4718();
      local_18 = (CMDIFrameWnd *)FUN_004a5fed(0xc4);
      local_8._0_1_ = 6;
      if (local_18 == (CMDIFrameWnd *)0x0) {
        local_14 = (CMDIFrameWnd *)0x0;
      }
      else {
        local_14 = FUN_00472de0(local_18);
      }
      local_8._0_1_ = 4;
      iVar7 = (**(code **)(*(int *)local_14 + 0xbc))(2,0xcf8000,0,0);
      if (iVar7 == 0) {
        local_8 = 0xffffffff;
        FUN_0040f64b();
      }
      else {
        *(CMDIFrameWnd **)((int)param_1 + 0x1c) = local_14;
        FUN_004bb0c3((int)param_1);
        *(undefined4 *)((int)param_1 + 0x6c) = 3;
        FUN_00437b90(DAT_004dae3c,0);
        local_18 = (CMDIFrameWnd *)FUN_00412c20(0x62);
        piVar13 = (int *)0x0;
        local_8._0_1_ = 7;
        if (local_18 != (CMDIFrameWnd *)0x0) {
          piVar13 = FUN_0048a2b0((undefined4 *)local_18);
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        DAT_004da38c = piVar13;
        (**(code **)(*piVar13 + 0x108))();
        bVar14 = FUN_004bb012(param_1,(int)local_50);
        if (CONCAT31(extraout_var,bVar14) != 0) {
          DAT_004d99c4 = 1;
          if (*(int *)((int)param_1 + 0xd0) == 0) {
            uVar4 = FUN_0046e970((int)DAT_004dc564);
            if ((short)uVar4 == 0) {
              local_8 = 0xffffffff;
              FUN_0040f64b();
              goto LAB_0040f1d8;
            }
          }
          FUN_00442ed0(2,0x2000,8);
          if (*(int *)((int)param_1 + 0xd0) == 0) {
            CWnd::ShowWindow((CWnd *)local_14,*(int *)((int)param_1 + 0x6c));
            local_18 = (CMDIFrameWnd *)0xffffffff;
            iVar7 = GetSystemMetrics(7);
            local_18 = (CMDIFrameWnd *)((int)local_18 - iVar7);
            iVar7 = GetSystemMetrics(0x2d);
            local_18 = (CMDIFrameWnd *)((int)local_18 - iVar7);
            iVar7 = GetSystemMetrics(8);
            sVar2 = FUN_0040f6f0();
            iVar8 = GetSystemMetrics(0x2e);
            iVar9 = GetSystemMetrics(0x2e);
            iVar10 = GetSystemMetrics(8);
            sVar3 = FUN_0040f6f0();
            local_2c = GetSystemMetrics(1);
            local_2c = sVar3 + 2 + (iVar9 + iVar10) * 2 + local_2c;
            iVar9 = GetSystemMetrics(0x2d);
            iVar10 = GetSystemMetrics(7);
            iVar11 = GetSystemMetrics(0);
            CWnd::MoveWindow((CWnd *)local_14,(int)local_18,((-1 - iVar7) - (int)sVar2) - iVar8,
                             iVar11 + 2 + (iVar9 + iVar10) * 2,local_2c,1);
            iVar7 = FUN_0046e950(DAT_004dc564,1);
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x82) != 0)) {
              GetWindowRect(*(HWND *)(local_14 + 0x1c),&local_28);
              local_28.right = local_28.right - local_28.left;
              local_28.bottom = local_28.bottom - local_28.top;
              local_28.top = 0;
              local_28.left = 0;
              iVar7 = FUN_00409590(*(int *)(iVar7 + 0x82));
              CWnd::MoveWindow(*(CWnd **)(iVar7 + 0x26),local_28.left,local_28.top,
                               local_28.right - local_28.left,local_28.bottom - local_28.top,1);
            }
          }
          else {
            CWnd::ShowWindow((CWnd *)local_14,*(int *)((int)param_1 + 0x6c));
          }
          local_70.dwLength = 0x20;
          GlobalMemoryStatus(&local_70);
          local_8 = 0xffffffff;
          DAT_004dc55c = local_70.dwAvailPhys;
          FUN_0040f64b();
          uVar4 = 1;
          goto LAB_0040f1da;
        }
        local_8 = 0xffffffff;
        FUN_0040f64b();
      }
    }
  }
  else {
    SetForegroundWindow(hWnd);
  }
LAB_0040f1d8:
  uVar4 = 0;
LAB_0040f1da:
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}


