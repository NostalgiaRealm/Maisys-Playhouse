
/* ==== CDocument::RemoveView @ 004b0a4f ==== 
 * signature: void __thiscall RemoveView(CDocument * this, CView * param_1)
 * body: 004b0a4f-004b0a7f
 * note: Library Function - Single Match  public: void __thiscall CDocument::RemoveView(class CView *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDocument::RemoveView(class CView *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::RemoveView(CDocument *this,CView *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CPtrList::Find((CPtrList *)(this + 0x28),param_1,(__POSITION *)0x0);
  CPtrList::RemoveAt((CPtrList *)(this + 0x28),p_Var1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  (**(code **)(*(int *)this + 0x6c))();
  return;
}


