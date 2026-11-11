
/* ==== CDocument::`scalar_deleting_destructor' @ 004af9e5 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CDocument * this, uint param_1)
 * body: 004af9e5-004afa02
 * note: Library Function - Single Match  public: virtual void * __thiscall CDocument::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CDocument::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CDocument::_scalar_deleting_destructor_(CDocument *this,uint param_1)

{
  ~CDocument(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


