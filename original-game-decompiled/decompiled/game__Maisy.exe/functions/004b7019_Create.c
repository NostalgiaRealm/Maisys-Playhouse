
/* ==== CMDIChildWnd::Create @ 004b7019 ==== 
 * signature: int __thiscall Create(CMDIChildWnd * this, char * param_1, char * param_2, ulong param_3, tagRECT * param_4, CMDIFrameWnd * param_5, CCreateContext * param_6)
 * body: 004b7019-004b717e
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIChildWnd::Create(char const *,char const *,unsigned long,struct tagRECT const &,class CMDIFrameWnd *,struct CCreateContext *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::Create(char const *,char const *,unsigned
   long,struct tagRECT const &,class CMDIFrameWnd *,struct CCreateContext *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMDIChildWnd::Create
          (CMDIChildWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,
          CMDIFrameWnd *param_5,CCreateContext *param_6)

{
  bool bVar1;
  int iVar2;
  HWND hWnd;
  undefined3 extraout_var;
  CMDIFrameWnd *pCVar3;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  LONG local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  CCreateContext *local_38;
  CCreateContext *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  LONG local_18;
  ulong local_14;
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_5 == (CMDIFrameWnd *)0x0) {
    iVar2 = FUN_004a7052();
    param_5 = *(CMDIFrameWnd **)(iVar2 + 0x1c);
  }
  (**(code **)(*(int *)param_5 + 0xcc))(1);
  local_10 = param_2;
  local_14 = param_3;
  local_8 = 0;
  local_c = param_1;
  local_18 = param_4->left;
  local_1c = param_4->top;
  local_20 = param_4->right - param_4->left;
  local_24 = param_4->bottom - local_1c;
  local_28 = *(int *)(param_5 + 0x1c);
  local_2c = 0;
  iVar2 = FUN_004bafca();
  local_30 = *(undefined4 *)(iVar2 + 8);
  local_34 = param_6;
  iVar2 = (**(code **)(*(int *)this + 0x60))(&local_34);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0xa8))();
    iVar2 = 0;
  }
  else {
    local_58 = local_c;
    local_54 = local_10;
    local_50 = local_30;
    local_4c = local_18;
    local_48 = local_1c;
    local_44 = local_20;
    local_40 = local_24;
    pCVar3 = param_5 + 0xbc;
    local_3c = local_14 & 0xeeffffff;
    local_38 = local_34;
    FUN_004a8f34((int)this);
    hWnd = (HWND)SendMessageA(*(HWND *)pCVar3,0x220,0,(LPARAM)&local_58);
    bVar1 = FUN_004a8f79();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      (**(code **)(*(int *)this + 0xa8))();
    }
    if (hWnd == (HWND)0x0) {
      iVar2 = 0;
    }
    else {
      if ((local_14 & 0x10000000) != 0) {
        BringWindowToTop(hWnd);
        if ((local_14 & 0x20000000) == 0) {
          if ((local_14 & 0x1000000) == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
        CWnd::ShowWindow((CWnd *)this,iVar2);
        SendMessageA(*(HWND *)pCVar3,0x222,*(WPARAM *)(this + 0x1c),0);
        SendMessageA(*(HWND *)pCVar3,0x234,0,0);
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}


