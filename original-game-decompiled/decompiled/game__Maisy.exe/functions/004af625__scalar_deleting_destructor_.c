
/* ==== CMultiDocTemplate::`scalar_deleting_destructor' @ 004af625 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CMultiDocTemplate * this, uint param_1)
 * body: 004af625-004af642
 * note: Library Function - Single Match  public: virtual void * __thiscall CMultiDocTemplate::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CMultiDocTemplate::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall
CMultiDocTemplate::_scalar_deleting_destructor_(CMultiDocTemplate *this,uint param_1)

{
  ~CMultiDocTemplate(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


