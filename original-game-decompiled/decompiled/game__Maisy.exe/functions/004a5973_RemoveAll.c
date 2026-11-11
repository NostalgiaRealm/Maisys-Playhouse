
/* ==== CMapPtrToPtr::RemoveAll @ 004a5973 ==== 
 * signature: void __thiscall RemoveAll(CMapPtrToPtr * this)
 * body: 004a5973-004a59a1
 * note: Library Function - Single Match  public: void __thiscall CMapPtrToPtr::RemoveAll(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::RemoveAll(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMapPtrToPtr::RemoveAll(CMapPtrToPtr *this)

{
  if (*(LPVOID *)(this + 4) != (LPVOID)0x0) {
    FUN_004a602d(*(LPVOID *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(this + 0x14));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


