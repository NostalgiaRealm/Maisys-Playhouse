
/* ==== CCmdUI::SetCheck @ 004a7d3a ==== 
 * signature: void __thiscall SetCheck(CCmdUI * this, int param_1)
 * body: 004a7d3a-004a7d9f
 * note: Library Function - Single Match  public: virtual void __thiscall CCmdUI::SetCheck(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetCheck(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CCmdUI::SetCheck(CCmdUI *this,int param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 0x1c),0x87,0,0);
    if ((uVar1 & 0x2000) != 0) {
      SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 0x1c),0xf1,param_1,0);
    }
  }
  else if (*(int *)(this + 0x10) == 0) {
    CheckMenuItem(*(HMENU *)(*(int *)(this + 0xc) + 4),*(UINT *)(this + 8),
                  (uint)CONCAT11(4,(param_1 == 0) - 1U & 8));
  }
  return;
}


