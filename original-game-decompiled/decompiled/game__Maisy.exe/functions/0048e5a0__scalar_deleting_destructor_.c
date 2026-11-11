
/* ==== type_info::`scalar_deleting_destructor' @ 0048e5a0 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(type_info * this, uint param_1)
 * body: 0048e5a0-0048e5bd
 * note: Library Function - Single Match  public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


