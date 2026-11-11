
/* ==== CFrameWnd::InitialUpdateFrame @ 004b85af ==== 
 * signature: void __thiscall InitialUpdateFrame(CFrameWnd * this, CDocument * param_1, int param_2)
 * body: 004b85af-004b8675
 * note: Library Function - Single Match  public: void __thiscall CFrameWnd::InitialUpdateFrame(class CDocument *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::InitialUpdateFrame(class CDocument *,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::InitialUpdateFrame(CFrameWnd *this,CDocument *param_1,int param_2)

{
  int iVar1;
  CWnd *this_00;
  undefined4 uVar2;
  CWnd *pCVar3;
  
  pCVar3 = (CWnd *)0x0;
  iVar1 = FUN_004b8d18((int)this);
  if (iVar1 == 0) {
    this_00 = CWnd::GetDescendantWindow(*(HWND__ **)(this + 0x1c),0xe900,1);
    if (this_00 != (CWnd *)0x0) {
      iVar1 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CView_004ddc20);
      if (iVar1 != 0) {
        FUN_004b8d1f(this,(int *)this_00,0);
        pCVar3 = this_00;
      }
    }
  }
  if (param_2 != 0) {
    CWnd::SendMessageToDescendants(*(HWND__ **)(this + 0x1c),0x364,0,0,1,1);
    if (pCVar3 != (CWnd *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0xec))(0,this);
    }
    iVar1 = FUN_004bafca();
    uVar2 = 0xffffffff;
    iVar1 = *(int *)(iVar1 + 4);
    if (*(CFrameWnd **)(iVar1 + 0x1c) == this) {
      uVar2 = *(undefined4 *)(iVar1 + 0x6c);
      *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
    }
    (**(code **)(*(int *)this + 0xd0))(uVar2);
    if (pCVar3 != (CWnd *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0xe8))(1,pCVar3,pCVar3);
    }
  }
  if (param_1 != (CDocument *)0x0) {
    (**(code **)(*(int *)param_1 + 0xa4))();
  }
  (**(code **)(*(int *)this + 0xe4))(1);
  return;
}


