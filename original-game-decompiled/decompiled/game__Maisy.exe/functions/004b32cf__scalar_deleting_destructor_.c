
/* ==== CDocTemplate::`scalar_deleting_destructor' @ 004b32cf ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CDocTemplate * this, uint param_1)
 * body: 004b32cf-004b32ec
 * note: Library Function - Single Match  public: virtual void * __thiscall CDocTemplate::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CDocTemplate::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CDocTemplate::_scalar_deleting_destructor_(CDocTemplate *this,uint param_1)

{
  ~CDocTemplate(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


