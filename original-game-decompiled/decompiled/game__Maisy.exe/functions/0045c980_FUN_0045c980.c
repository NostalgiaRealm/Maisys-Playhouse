
/* ==== FUN_0045c980 @ 0045c980 ==== 
 * signature: undefined __thiscall FUN_0045c980(void * this, short * param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * body: 0045c980-0045cb22;0045cb2d-0045cc44;0045cc4f-0045cca3;0045ccb8-0045ce77
 */

void __thiscall
FUN_0045c980(void *this,short *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  HGLOBAL pvVar3;
  HGLOBAL hMem;
  HDC pHVar4;
  int *piVar5;
  CGdiObject *pCVar6;
  HWND hWndTo;
  CWnd *pCVar7;
  undefined4 uVar8;
  int iVar9;
  LPARAM lParam;
  undefined4 *unaff_FS_OFFSET;
  tagTEXTMETRICA local_90;
  undefined1 local_58 [16];
  void *local_48 [4];
  short local_38;
  SIZE_T local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  tagPOINT local_18;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045cca4;
  *unaff_FS_OFFSET = &local_10;
  if ((*(byte *)((int)param_4 + 0x1f) & 0x80) != 0) {
    *(int **)((int)this + 0x6c) = param_4;
    if (param_1 == (short *)0x0) {
      iVar9 = *param_4;
      (**(code **)(iVar9 + 0x398))(&local_20,0);
      for (piVar5 = (int *)(**(code **)(iVar9 + 0x16c))(); piVar5 != (int *)0x0;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x16c))()) {
        if ((*(uint *)((int)piVar5 + 0x1e) & 4) != 0) {
          (**(code **)(*piVar5 + 0x398))(&local_18,0);
          local_20 = local_20 + (short)local_18.x;
          local_1e = local_1e + local_18.x._2_2_;
          local_1c = (char *)CONCAT22(local_1c._2_2_ + local_18.x._2_2_,
                                      (short)local_1c + (short)local_18.x);
        }
      }
      local_1c._2_2_ = (short)((uint)local_1c >> 0x10);
      sVar1 = local_20;
      sVar2 = local_1e;
    }
    else {
      local_1c._0_2_ = param_1[2];
      local_1c._2_2_ = param_1[3];
      sVar1 = *param_1;
      sVar2 = param_1[1];
    }
    local_28 = (int)(short)local_1c;
    local_2c = (int)sVar2;
    local_30 = (int)sVar1;
    local_24 = (int)local_1c._2_2_;
    local_1c = (char *)0x0;
    pvVar3 = (HGLOBAL)FUN_00445fa0(*(void **)((int)this + 0x6c));
    local_34 = FUN_00445fe0(*(void **)((int)this + 0x6c));
    hMem = (HGLOBAL)0x0;
    if (pvVar3 != (HGLOBAL)0x0) {
      hMem = FUN_00412270(pvVar3,&local_34,'\x01');
      FUN_0043f7b0(hMem,local_34 + 1);
      local_1c = GlobalLock(hMem);
      local_1c[local_34] = '\0';
    }
    (**(code **)(**(int **)((int)this + 0x6c) + 0x418))(local_48);
    (**(code **)(**(int **)((int)this + 0x6c) + 0x410))(local_58);
    if (*(CWnd **)((int)this + 0x5c) == (CWnd *)0x0) {
      local_18.y = FUN_004a5fed(0x40);
      pCVar7 = (CWnd *)0x0;
      local_8 = 0;
      if ((CWnd *)local_18.y != (CWnd *)0x0) {
        pCVar7 = FUN_004488f0((CWnd *)local_18.y);
      }
      local_8 = 0xffffffff;
      *(CWnd **)((int)this + 0x5c) = pCVar7;
      if (local_38 == 0) {
        FUN_004b6735(pCVar7,0x50001044,&local_30,*(undefined4 *)((int)this + 0x2a),0x29b);
      }
      else {
        FUN_004b6735(pCVar7,0x40001044,&local_30,*(undefined4 *)((int)this + 0x2a),0x29b);
      }
    }
    else {
      CWnd::MoveWindow(*(CWnd **)((int)this + 0x5c),local_30,local_2c,local_28 - local_30,
                       local_24 - local_2c,1);
      CWnd::ShowWindow(*(CWnd **)((int)this + 0x5c),(uint)(local_38 == 0));
    }
    if (*(CWnd **)((int)this + 0x60) == (CWnd *)0x0) {
      if (local_38 == -1) {
        local_18.y = FUN_004a5fed(0x40);
        local_8 = 1;
        pCVar7 = (CWnd *)0x0;
        if ((CWnd *)local_18.y != (CWnd *)0x0) {
          pCVar7 = FUN_004488f0((CWnd *)local_18.y);
        }
        local_8 = 0xffffffff;
        *(CWnd **)((int)this + 0x60) = pCVar7;
        FUN_004b6735(pCVar7,0x50001046,&local_30,*(undefined4 *)((int)this + 0x2a),0x29b);
      }
    }
    else {
      CWnd::MoveWindow(*(CWnd **)((int)this + 0x60),local_30,local_2c,local_28 - local_30,
                       local_24 - local_2c,1);
      CWnd::ShowWindow(*(CWnd **)((int)this + 0x60),(uint)(local_38 == -1));
    }
    if (*(CWnd **)((int)this + 100) == (CWnd *)0x0) {
      if (local_38 == 1) {
        local_18.y = FUN_004a5fed(0x40);
        pCVar7 = (CWnd *)0x0;
        local_8 = 2;
        if ((CWnd *)local_18.y != (CWnd *)0x0) {
          pCVar7 = FUN_004488f0((CWnd *)local_18.y);
        }
        local_8 = 0xffffffff;
        *(CWnd **)((int)this + 100) = pCVar7;
        FUN_004b6735(pCVar7,0x50001045,&local_30,*(undefined4 *)((int)this + 0x2a),0x29b);
      }
    }
    else {
      CWnd::MoveWindow(*(CWnd **)((int)this + 100),local_30,local_2c,local_28 - local_30,
                       local_24 - local_2c,1);
      CWnd::ShowWindow(*(CWnd **)((int)this + 100),(uint)(local_38 == 1));
    }
    if (local_38 == 0) {
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x5c);
    }
    else {
      if (local_38 == -1) {
        uVar8 = *(undefined4 *)((int)this + 0x60);
      }
      else {
        uVar8 = *(undefined4 *)((int)this + 100);
      }
      *(undefined4 *)((int)this + 0x68) = uVar8;
    }
    if (local_48[0] == (void *)0x0) {
      local_48[0] = DAT_004dae34;
    }
    if (*(int *)((int)this + 0x68) != 0) {
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c),0x30,(WPARAM)local_48[0],1);
    }
    if (hMem != (HGLOBAL)0x0) {
      if (*(CWnd **)((int)this + 0x68) != (CWnd *)0x0) {
        CWnd::SetWindowTextA(*(CWnd **)((int)this + 0x68),local_1c);
      }
      GlobalUnlock(hMem);
      FUN_0043f7a0(hMem);
    }
    if (*(int *)((int)this + 0x68) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x68) + 0x3c) = 1;
      local_1c = *(char **)(*(int *)((int)this + 0x6c) + 0xc2);
      if ((int)local_1c < 0) {
        pHVar4 = GetDC(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c));
        piVar5 = (int *)FUN_004b0c83(pHVar4);
        iVar9 = 0;
        if (piVar5 != (int *)0x0) {
          pCVar6 = CGdiObject::FromHandle(local_48[0]);
          (**(code **)(*piVar5 + 0x30))(pCVar6);
          GetTextMetricsA((HDC)piVar5[2],&local_90);
          ReleaseDC(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c),(HDC)piVar5[1]);
          iVar9 = local_90.tmHeight;
        }
        if (iVar9 != 0) {
          lParam = -((int)local_1c._2_2_ / iVar9);
          if (iVar9 / 2 < -(int)local_1c._2_2_ % iVar9) {
            lParam = lParam + 1;
          }
          SendMessageA(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c),0xb6,0,lParam);
        }
      }
      local_18.x = (LONG)DAT_004db500;
      local_18.y = (LONG)DAT_004db502;
      if (*(int *)((int)this + 0x2a) != 0) {
        if (*(int *)((int)this + 0x68) == 0) {
          hWndTo = (HWND)0x0;
        }
        else {
          hWndTo = *(HWND *)(*(int *)((int)this + 0x68) + 0x1c);
        }
        MapWindowPoints(*(HWND *)(*(int *)((int)this + 0x2a) + 0x1c),hWndTo,&local_18,1);
      }
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c),0x201,0,
                   local_18.y << 0x10 | local_18.x & 0xffffU);
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x68) + 0x1c),0x202,0,
                   local_18.y << 0x10 | local_18.x & 0xffffU);
      CWnd::SetFocus(*(CWnd **)((int)this + 0x68));
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


