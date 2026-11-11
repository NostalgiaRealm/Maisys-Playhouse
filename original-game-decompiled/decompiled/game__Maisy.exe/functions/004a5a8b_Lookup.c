
/* ==== CMapPtrToPtr::Lookup @ 004a5a8b ==== 
 * signature: int __thiscall Lookup(CMapPtrToPtr * this, void * param_1, void * * param_2)
 * body: 004a5a8b-004a5ab7
 * note: Library Function - Single Match  public: int __thiscall CMapPtrToPtr::Lookup(void *,void * &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CMapPtrToPtr::Lookup(void *,void * &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CMapPtrToPtr::Lookup(CMapPtrToPtr *this,void *param_1,void **param_2)

{
  CAssoc *pCVar1;
  uint local_4;
  
  pCVar1 = GetAssocAt(this,param_1,&local_4);
  if (pCVar1 != (CAssoc *)0x0) {
    *param_2 = *(void **)(pCVar1 + 0xc);
  }
  return (uint)(pCVar1 != (CAssoc *)0x0);
}


