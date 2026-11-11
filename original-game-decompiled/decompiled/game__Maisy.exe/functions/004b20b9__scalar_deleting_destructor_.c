
/* ==== CPaintDC::`scalar_deleting_destructor' @ 004b20b9 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CPaintDC * this, uint param_1)
 * body: 004b20b9-004b20d6
 * note: Library Function - Single Match  public: virtual void * __thiscall CPaintDC::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CPaintDC::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CPaintDC::_scalar_deleting_destructor_(CPaintDC *this,uint param_1)

{
  ~CPaintDC(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


