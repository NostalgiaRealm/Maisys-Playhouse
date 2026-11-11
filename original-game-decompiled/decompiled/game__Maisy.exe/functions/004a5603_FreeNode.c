
/* ==== FreeNode @ 004a5603 ==== 
 * signature: undefined __thiscall FreeNode(void * this, undefined4 * param_1)
 * body: 004a5603-004a561f
 * note: Library Function - Multiple Matches With Same Base Name  protected: void __thiscall CObList::FreeNode(struct CObList::CNode *)  protected: void __thiscall CPtrList::FreeNode(struct CPtrList::CNode *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CObList::FreeNode(struct CObList::CNode *)
    protected: void __thiscall CPtrList::FreeNode(struct CPtrList::CNode *)
   
   Library: Visual Studio 1998 Release */

void __thiscall FreeNode(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 **)((int)this + 0x10) = param_1;
  iVar1 = *(int *)((int)this + 0xc) + -1;
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}


