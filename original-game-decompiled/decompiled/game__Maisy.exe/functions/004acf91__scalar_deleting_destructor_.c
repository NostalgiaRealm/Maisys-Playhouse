
/* ==== CRecentFileList::`scalar_deleting_destructor' @ 004acf91 ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CRecentFileList * this, uint param_1)
 * body: 004acf91-004acfae
 * note: Library Function - Single Match  public: virtual void * __thiscall CRecentFileList::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CRecentFileList::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CRecentFileList::_scalar_deleting_destructor_(CRecentFileList *this,uint param_1)

{
  ~CRecentFileList(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


