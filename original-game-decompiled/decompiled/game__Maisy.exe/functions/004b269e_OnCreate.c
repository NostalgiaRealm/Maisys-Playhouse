
/* ==== CView::OnCreate @ 004b269e ==== 
 * signature: int __thiscall OnCreate(CView * this, tagCREATESTRUCTA * param_1)
 * body: 004b269e-004b26ce
 * note: Library Function - Single Match  protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTA *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTA *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CView::OnCreate(CView *this,tagCREATESTRUCTA *param_1)

{
  CDocument *this_00;
  int iVar1;
  
  iVar1 = FUN_004a8882((int *)this);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    if ((*(int *)param_1 != 0) &&
       (this_00 = *(CDocument **)(*(int *)param_1 + 4), this_00 != (CDocument *)0x0)) {
      CDocument::AddView(this_00,this);
    }
    iVar1 = 0;
  }
  return iVar1;
}


