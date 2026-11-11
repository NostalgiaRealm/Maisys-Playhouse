
/* ==== CFrameWnd::PreCreateWindow @ 004b81e2 ==== 
 * signature: int __thiscall PreCreateWindow(CFrameWnd * this, tagCREATESTRUCTA * param_1)
 * body: 004b81e2-004b823f
 * note: Library Function - Single Match  protected: virtual int __thiscall CFrameWnd::PreCreateWindow(struct tagCREATESTRUCTA &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual int __thiscall CFrameWnd::PreCreateWindow(struct tagCREATESTRUCTA &)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::PreCreateWindow(CFrameWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_004bafca();
    iVar2 = 1;
    if ((*(byte *)(iVar1 + 0x18) & 8) == 0) {
      iVar2 = FUN_004ab920(8);
    }
    if (iVar2 == 0) {
      return 0;
    }
    *(char **)(param_1 + 0x28) = "AfxFrameOrView40s";
  }
  if ((*(uint *)(param_1 + 0x20) & 0x8000) != 0) {
    if (DAT_004e51f8 == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000;
  }
  if (DAT_004e51f8 != 0) {
    param_1[0x2d] = (tagCREATESTRUCTA)((byte)param_1[0x2d] | 2);
  }
  return 1;
}


