
/* ==== CWnd::`scalar_deleting_destructor' @ 004a85ad ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CWnd * this, uint param_1)
 * body: 004a85ad-004a85ca
 * note: Library Function - Single Match  public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CWnd::_scalar_deleting_destructor_(CWnd *this,uint param_1)

{
  ~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


