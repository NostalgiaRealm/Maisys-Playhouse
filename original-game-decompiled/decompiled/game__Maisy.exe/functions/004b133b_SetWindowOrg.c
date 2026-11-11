
/* ==== CDC::SetWindowOrg @ 004b133b ==== 
 * signature: CPoint __thiscall SetWindowOrg(CDC * this, int param_1, int param_2)
 * body: 004b133b-004b138b
 * note: Library Function - Single Match  public: class CPoint __thiscall CDC::SetWindowOrg(int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CPoint __thiscall CDC::SetWindowOrg(int,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::SetWindowOrg(CDC *this,int param_1,int param_2)

{
  int in_stack_0000000c;
  tagPOINT local_c;
  
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    SetWindowOrgEx(*(HDC *)(this + 4),param_2,in_stack_0000000c,&local_c);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    SetWindowOrgEx(*(HDC *)(this + 8),param_2,in_stack_0000000c,&local_c);
  }
  *(LONG *)param_1 = local_c.x;
  *(LONG *)(param_1 + 4) = local_c.y;
  return param_1;
}


