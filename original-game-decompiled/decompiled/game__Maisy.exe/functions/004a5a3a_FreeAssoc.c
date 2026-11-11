
/* ==== FreeAssoc @ 004a5a3a ==== 
 * signature: undefined __thiscall FreeAssoc(void * this, undefined4 * param_1)
 * body: 004a5a3a-004a5a56
 * note: Library Function - Multiple Matches With Same Base Name  protected: void __thiscall CMapPtrToPtr::FreeAssoc(struct CMapPtrToPtr::CAssoc *)  protected: void __thiscall CMapPtrToWord::FreeAssoc(struct CMapPtrToWord::CAssoc *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMapPtrToPtr::FreeAssoc(struct CMapPtrToPtr::CAssoc *)
    protected: void __thiscall CMapPtrToWord::FreeAssoc(struct CMapPtrToWord::CAssoc *)
   
   Library: Visual Studio 1998 Release */

void __thiscall FreeAssoc(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 **)((int)this + 0x10) = param_1;
  iVar1 = *(int *)((int)this + 0xc) + -1;
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 0) {
    CMapPtrToPtr::RemoveAll(this);
  }
  return;
}


