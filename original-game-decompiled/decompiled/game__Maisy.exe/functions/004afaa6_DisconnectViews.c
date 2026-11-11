
/* ==== CDocument::DisconnectViews @ 004afaa6 ==== 
 * signature: void __thiscall DisconnectViews(CDocument * this)
 * body: 004afaa6-004afac8
 * note: Library Function - Single Match  public: void __thiscall CDocument::DisconnectViews(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDocument::DisconnectViews(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::DisconnectViews(CDocument *this)

{
  void *pvVar1;
  
  if (*(int *)(this + 0x34) != 0) {
    do {
      pvVar1 = CPtrList::RemoveHead((CPtrList *)(this + 0x28));
      *(undefined4 *)((int)pvVar1 + 0x3c) = 0;
    } while (*(int *)(this + 0x34) != 0);
  }
  return;
}


