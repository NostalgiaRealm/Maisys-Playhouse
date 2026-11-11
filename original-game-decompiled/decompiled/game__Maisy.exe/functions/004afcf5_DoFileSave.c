
/* ==== CDocument::DoFileSave @ 004afcf5 ==== 
 * signature: int __thiscall DoFileSave(CDocument * this)
 * body: 004afcf5-004afd37
 * note: Library Function - Single Match  public: virtual int __thiscall CDocument::DoFileSave(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocument::DoFileSave(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDocument::DoFileSave(CDocument *this)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetFileAttributesA(*(LPCSTR *)(this + 0x20));
  if ((DVar1 & 1) == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x9c))(*(undefined4 *)(this + 0x20),1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x9c))(0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


