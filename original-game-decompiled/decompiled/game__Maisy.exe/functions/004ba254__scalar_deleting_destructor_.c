
/* ==== CCommandLineInfo::`scalar_deleting_destructor' @ 004ba254 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CCommandLineInfo * this, uint param_1)
 * body: 004ba254-004ba271
 * note: Library Function - Single Match  public: virtual void * __thiscall CCommandLineInfo::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CCommandLineInfo::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall
CCommandLineInfo::_scalar_deleting_destructor_(CCommandLineInfo *this,uint param_1)

{
  ~CCommandLineInfo(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


