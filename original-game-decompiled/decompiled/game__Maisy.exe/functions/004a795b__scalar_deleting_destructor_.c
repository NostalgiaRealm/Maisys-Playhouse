
/* ==== CCmdTarget::`scalar_deleting_destructor' @ 004a795b ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CCmdTarget * this, uint param_1)
 * body: 004a795b-004a7978
 * note: Library Function - Single Match  public: virtual void * __thiscall CCmdTarget::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CCmdTarget::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CCmdTarget::_scalar_deleting_destructor_(CCmdTarget *this,uint param_1)

{
  ~CCmdTarget(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


