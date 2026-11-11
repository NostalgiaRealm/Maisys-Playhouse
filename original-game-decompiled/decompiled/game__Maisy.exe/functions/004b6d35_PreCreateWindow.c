
/* ==== CMDIFrameWnd::PreCreateWindow @ 004b6d35 ==== 
 * signature: int __thiscall PreCreateWindow(CMDIFrameWnd * this, tagCREATESTRUCTA * param_1)
 * body: 004b6d35-004b6d6e
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIFrameWnd::PreCreateWindow(struct tagCREATESTRUCTA &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWnd::PreCreateWindow(struct tagCREATESTRUCTA &)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMDIFrameWnd::PreCreateWindow(CMDIFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_004bafca();
    iVar2 = 1;
    if ((*(byte *)(iVar1 + 0x18) & 4) == 0) {
      iVar2 = FUN_004ab920(4);
    }
    if (iVar2 == 0) {
      return 0;
    }
    *(char **)(param_1 + 0x28) = "AfxMDIFrame40s";
  }
  return 1;
}


