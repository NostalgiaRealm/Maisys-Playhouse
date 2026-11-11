
/* ==== CView::PreCreateWindow @ 004b2645 ==== 
 * signature: int __thiscall PreCreateWindow(CView * this, tagCREATESTRUCTA * param_1)
 * body: 004b2645-004b269d
 * note: Library Function - Single Match  protected: virtual int __thiscall CView::PreCreateWindow(struct tagCREATESTRUCTA &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual int __thiscall CView::PreCreateWindow(struct tagCREATESTRUCTA &)
   
   Library: Visual Studio 1998 Release */

int __thiscall CView::PreCreateWindow(CView *this,tagCREATESTRUCTA *param_1)

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
  if ((DAT_004e51f8 != 0) && ((*(uint *)(param_1 + 0x20) & 0x800000) != 0)) {
    param_1[0x2d] = (tagCREATESTRUCTA)((byte)param_1[0x2d] | 2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff7fffff;
  }
  return 1;
}


