
/* ==== FUN_004b8e9f @ 004b8e9f ==== 
 * signature: undefined __thiscall FUN_004b8e9f(void * this, int param_1, undefined4 param_2, int param_3)
 * body: 004b8e9f-004b9012
 */

void __thiscall FUN_004b8e9f(void *this,int param_1,undefined4 param_2,int param_3)

{
  _AFX_THREAD_STATE *p_Var1;
  CWnd *pCVar2;
  HMENU pHVar3;
  HMENU pHVar4;
  uint uVar5;
  UINT UVar6;
  int nPos;
  int iVar7;
  CCmdUI local_30 [4];
  UINT local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_10;
  int local_c;
  CWnd *local_8;
  
  local_8 = this;
  FUN_004b2ebf(*(HWND *)((int)this + 0x1c));
  if (param_3 == 0) {
    CCmdUI::CCmdUI(local_30);
    local_24 = param_1;
    p_Var1 = AfxGetThreadState();
    if (*(int *)(p_Var1 + 0x58) == *(int *)(param_1 + 4)) {
      local_c = param_1;
    }
    else {
      pHVar4 = GetMenu(*(HWND *)(local_8 + 0x1c));
      if (((pHVar4 != (HMENU)0x0) &&
          (pCVar2 = CWnd::GetTopLevelParent(local_8), pCVar2 != (CWnd *)0x0)) &&
         (pHVar4 = GetMenu(*(HWND *)(pCVar2 + 0x1c)), pHVar4 != (HMENU)0x0)) {
        nPos = 0;
        iVar7 = GetMenuItemCount(pHVar4);
        if (0 < iVar7) {
          do {
            pHVar3 = GetSubMenu(pHVar4,nPos);
            if (pHVar3 == *(HMENU *)(param_1 + 4)) {
              local_c = FromHandle(pHVar4);
              break;
            }
            nPos = nPos + 1;
          } while (nPos < iVar7);
        }
      }
    }
    local_10 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_28 = 0;
    if (local_10 != 0) {
      do {
        local_2c = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28);
        uVar5 = local_10;
        if (local_2c != 0) {
          if (local_2c == 0xffffffff) {
            pHVar4 = GetSubMenu(*(HMENU *)(param_1 + 4),local_28);
            local_20 = FromHandle(pHVar4);
            uVar5 = local_10;
            if (((local_20 == 0) ||
                (local_2c = GetMenuItemID(*(HMENU *)(local_20 + 4),0), uVar5 = local_10,
                local_2c == 0)) || (local_2c == 0xffffffff)) goto LAB_004b8ffb;
            iVar7 = 0;
          }
          else {
            local_20 = 0;
            if ((*(int *)(local_8 + 0x3c) == 0) || (iVar7 = 1, 0xefff < local_2c)) {
              iVar7 = 0;
            }
          }
          FUN_004a7e4a(local_30,(int *)local_8,iVar7);
          uVar5 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
          if (uVar5 < local_10) {
            local_28 = local_28 + (uVar5 - local_10);
            while ((local_28 < uVar5 &&
                   (UVar6 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28), UVar6 == local_2c))) {
              local_28 = local_28 + 1;
            }
          }
        }
LAB_004b8ffb:
        local_10 = uVar5;
        local_28 = local_28 + 1;
      } while (local_28 < local_10);
    }
  }
  return;
}


