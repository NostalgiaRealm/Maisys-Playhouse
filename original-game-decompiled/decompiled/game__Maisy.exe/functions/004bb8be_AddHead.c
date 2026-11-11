
/* ==== CSimpleList::AddHead @ 004bb8be ==== 
 * signature: void __thiscall AddHead(CSimpleList * this, void * param_1)
 * body: 004bb8be-004bb8d0
 * note: Library Function - Single Match  public: void __thiscall CSimpleList::AddHead(void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CSimpleList::AddHead(void *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CSimpleList::AddHead(CSimpleList *this,void *param_1)

{
  *(undefined4 *)(*(int *)(this + 4) + (int)param_1) = *(undefined4 *)this;
  *(void **)this = param_1;
  return;
}


