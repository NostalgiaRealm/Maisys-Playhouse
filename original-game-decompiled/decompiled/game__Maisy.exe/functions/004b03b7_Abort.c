
/* ==== CMirrorFile::Abort @ 004b03b7 ==== 
 * signature: void __thiscall Abort(CMirrorFile * this)
 * body: 004b03b7-004b03cf
 * note: Library Function - Single Match  public: virtual void __thiscall CMirrorFile::Abort(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMirrorFile::Abort(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMirrorFile::Abort(CMirrorFile *this)

{
  CFile::Abort((CFile *)this);
  if (*(int *)(*(char **)(this + 0x10) + -8) != 0) {
    CFile::Remove(*(char **)(this + 0x10));
  }
  return;
}


