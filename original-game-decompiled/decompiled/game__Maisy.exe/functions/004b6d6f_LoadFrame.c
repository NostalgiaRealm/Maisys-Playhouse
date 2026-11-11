
/* ==== CMDIFrameWnd::LoadFrame @ 004b6d6f ==== 
 * signature: int __thiscall LoadFrame(CMDIFrameWnd * this, uint param_1, ulong param_2, CWnd * param_3, CCreateContext * param_4)
 * body: 004b6d6f-004b6da4
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd *,struct CCreateContext *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMDIFrameWnd::LoadFrame
          (CMDIFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  int iVar1;
  HMENU pHVar2;
  
  iVar1 = CFrameWnd::LoadFrame((CFrameWnd *)this,param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    pHVar2 = GetMenu(*(HWND *)(this + 0x1c));
    *(HMENU *)(this + 0x44) = pHVar2;
  }
  return (uint)(iVar1 != 0);
}


