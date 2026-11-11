
/* ==== _AFX_CTL3D_STATE::`scalar_deleting_destructor' @ 0048d84b ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(_AFX_CTL3D_STATE * this, uint param_1)
 * body: 0048d84b-0048d865
 * note: Library Function - Single Match  public: virtual void * __thiscall _AFX_CTL3D_STATE::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_CTL3D_STATE::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall
_AFX_CTL3D_STATE::_scalar_deleting_destructor_(_AFX_CTL3D_STATE *this,uint param_1)

{
  ~_AFX_CTL3D_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


