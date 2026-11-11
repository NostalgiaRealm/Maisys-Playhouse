
/* ==== CDC::LPtoDP @ 004b1d47 ==== 
 * signature: void __thiscall LPtoDP(CDC * this, tagSIZE * param_1)
 * body: 004b1d47-004b1dd1
 * note: Library Function - Single Match  public: void __thiscall CDC::LPtoDP(struct tagSIZE *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDC::LPtoDP(struct tagSIZE *)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CDC::LPtoDP(CDC *this,tagSIZE *param_1)

{
  LONG _X;
  LONG _X_00;
  int iVar1;
  int iVar2;
  tagSIZE local_c;
  
  GetWindowExtEx(*(HDC *)(this + 8),&local_c);
  _X_00 = local_c.cy;
  _X = local_c.cx;
  GetViewportExtEx(*(HDC *)(this + 8),&local_c);
  iVar1 = _abs(_X);
  iVar2 = _abs(local_c.cx);
  iVar1 = MulDiv(param_1->cx,iVar2,iVar1);
  param_1->cx = iVar1;
  iVar1 = _abs(_X_00);
  iVar2 = _abs(local_c.cy);
  iVar1 = MulDiv(param_1->cy,iVar2,iVar1);
  param_1->cy = iVar1;
  return;
}


