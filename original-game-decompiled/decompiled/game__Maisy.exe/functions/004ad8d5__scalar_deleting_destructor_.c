
/* ==== CFile::`scalar_deleting_destructor' @ 004ad8d5 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CFile * this, uint param_1)
 * body: 004ad8d5-004ad8f2
 * note: Library Function - Single Match  public: virtual void * __thiscall CFile::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CFile::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CFile::_scalar_deleting_destructor_(CFile *this,uint param_1)

{
  ~CFile(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


