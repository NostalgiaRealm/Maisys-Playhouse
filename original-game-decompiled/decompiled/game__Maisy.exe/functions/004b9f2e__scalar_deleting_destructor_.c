
/* ==== _AFX_WIN_STATE::`scalar_deleting_destructor' @ 004b9f2e ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(_AFX_WIN_STATE * this, uint param_1)
 * body: 004b9f2e-004b9f48
 * note: Library Function - Single Match  public: virtual void * __thiscall _AFX_WIN_STATE::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_WIN_STATE::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall _AFX_WIN_STATE::_scalar_deleting_destructor_(_AFX_WIN_STATE *this,uint param_1)

{
  ~_AFX_WIN_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


