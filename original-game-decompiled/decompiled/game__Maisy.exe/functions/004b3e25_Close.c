
/* ==== CArchive::Close @ 004b3e25 ==== 
 * signature: void __thiscall Close(CArchive * this)
 * body: 004b3e25-004b3e35
 * note: Library Function - Single Match  public: void __thiscall CArchive::Close(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CArchive::Close(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::Close(CArchive *this)

{
  Flush(this);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


