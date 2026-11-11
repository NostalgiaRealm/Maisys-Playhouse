
/* ==== CWnd::OnActivateTopLevel @ 004aaf1d ==== 
 * signature: long __thiscall OnActivateTopLevel(CWnd * this, uint param_1, long param_2)
 * body: 004aaf1d-004aaf3e
 * note: Library Function - Single Match  protected: long __thiscall CWnd::OnActivateTopLevel(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnActivateTopLevel(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CWnd::OnActivateTopLevel(CWnd *this,uint param_1,long param_2)

{
  _AFX_THREAD_STATE *p_Var1;
  
  if ((short)param_1 == 0) {
    p_Var1 = AfxGetThreadState();
    if (((byte)p_Var1[0xe3] & 0x40) == 0) {
      CancelToolTips(1);
    }
  }
  return 0;
}


