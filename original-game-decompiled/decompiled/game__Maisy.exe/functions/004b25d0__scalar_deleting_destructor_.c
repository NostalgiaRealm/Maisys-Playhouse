
/* ==== CView::`scalar_deleting_destructor' @ 004b25d0 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CView * this, uint param_1)
 * body: 004b25d0-004b25ed
 * note: Library Function - Single Match  public: virtual void * __thiscall CView::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CView::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CView::_scalar_deleting_destructor_(CView *this,uint param_1)

{
  ~CView(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


