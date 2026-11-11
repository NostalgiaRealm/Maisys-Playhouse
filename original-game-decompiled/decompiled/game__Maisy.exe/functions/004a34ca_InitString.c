
/* ==== CSimpleException::InitString @ 004a34ca ==== 
 * signature: void __thiscall InitString(CSimpleException * this)
 * body: 004a34ca-004a34f2
 * note: Library Function - Single Match  public: void __thiscall CSimpleException::InitString(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = AfxLoadString(*(uint *)(this + 0x94),(char *)(this + 0x14),0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}


