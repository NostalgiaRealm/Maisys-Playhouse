
/* ==== CMapPtrToPtr::GetAssocAt @ 004a5a57 ==== 
 * signature: CAssoc * __thiscall GetAssocAt(CMapPtrToPtr * this, void * param_1, uint * param_2)
 * body: 004a5a57-004a5a8a
 * note: Library Function - Single Match  protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::GetAssocAt(void *,unsigned int &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::GetAssocAt(void *,unsigned int
   &)const 
   
   Library: Visual Studio 1998 Release */

CAssoc * __thiscall CMapPtrToPtr::GetAssocAt(CMapPtrToPtr *this,void *param_1,uint *param_2)

{
  CAssoc *pCVar1;
  uint uVar2;
  
  uVar2 = ((uint)param_1 >> 4) % *(uint *)(this + 8);
  *param_2 = uVar2;
  if (*(int *)(this + 4) != 0) {
    for (pCVar1 = *(CAssoc **)(*(int *)(this + 4) + uVar2 * 4); pCVar1 != (CAssoc *)0x0;
        pCVar1 = *(CAssoc **)pCVar1) {
      if (*(void **)(pCVar1 + 8) == param_1) {
        return pCVar1;
      }
    }
  }
  return (CAssoc *)0x0;
}


