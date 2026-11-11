
/* ==== CDocument::AddView @ 004b0a2f ==== 
 * signature: void __thiscall AddView(CDocument * this, CView * param_1)
 * body: 004b0a2f-004b0a4e
 * note: Library Function - Single Match  public: void __thiscall CDocument::AddView(class CView *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDocument::AddView(class CView *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::AddView(CDocument *this,CView *param_1)

{
  FUN_004a564c(this + 0x28,param_1);
  *(CDocument **)(param_1 + 0x3c) = this;
  (**(code **)(*(int *)this + 0x6c))();
  return;
}


