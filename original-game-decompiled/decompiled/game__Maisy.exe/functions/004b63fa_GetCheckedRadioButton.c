
/* ==== CWnd::GetCheckedRadioButton @ 004b63fa ==== 
 * signature: int __thiscall GetCheckedRadioButton(CWnd * this, int param_1, int param_2)
 * body: 004b63fa-004b6426
 * note: Library Function - Single Match  public: int __thiscall CWnd::GetCheckedRadioButton(int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::GetCheckedRadioButton(int,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::GetCheckedRadioButton(CWnd *this,int param_1,int param_2)

{
  uint uVar1;
  
  while( true ) {
    if (param_2 < param_1) {
      return 0;
    }
    uVar1 = IsDlgButtonChecked(this,param_1);
    if (uVar1 != 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


