
/* ==== CDC::`scalar_deleting_destructor' @ 004b0bbe ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CDC * this, uint param_1)
 * body: 004b0bbe-004b0bdb
 * note: Library Function - Single Match  public: virtual void * __thiscall CDC::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CDC::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CDC::_scalar_deleting_destructor_(CDC *this,uint param_1)

{
  ~CDC(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


