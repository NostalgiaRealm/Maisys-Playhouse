
/* ==== CDialog::EndDialog @ 004a6a22 ==== 
 * signature: void __thiscall EndDialog(CDialog * this, int param_1)
 * body: 004a6a22-004a6a44
 * note: Library Function - Single Match  public: void __thiscall CDialog::EndDialog(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDialog::EndDialog(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDialog::EndDialog(CDialog *this,int param_1)

{
  if (((byte)this[0x24] & 0x18) != 0) {
    (**(code **)(*(int *)this + 0x78))(param_1);
  }
  ::EndDialog(*(HWND *)(this + 0x1c),param_1);
  return;
}


