
/* ==== FUN_004ae7e2 @ 004ae7e2 ==== 
 * signature: CObject * __thiscall FUN_004ae7e2(void * this, void * param_1)
 * body: 004ae7e2-004ae878
 */

CObject * __thiscall FUN_004ae7e2(void *this,void *param_1)

{
  int iVar1;
  _func_int_uint *p_Var2;
  CObject *pCVar3;
  CAssoc *pCVar4;
  CObject *local_8;
  
  if (param_1 == (void *)0x0) {
    local_8 = (CObject *)0x0;
  }
  else {
    iVar1 = CMapPtrToPtr::Lookup(this,param_1,&local_8);
    if (iVar1 == 0) {
      iVar1 = CMapPtrToPtr::Lookup((CMapPtrToPtr *)((int)this + 0x1c),param_1,&local_8);
      if (iVar1 == 0) {
        p_Var2 = AfxSetNewHandler(FUN_004b2f6f);
        pCVar3 = CRuntimeClass::CreateObject(*(CRuntimeClass **)((int)this + 0x38));
        pCVar4 = FUN_004a5ab8((void *)((int)this + 0x1c),param_1);
        *(CObject **)pCVar4 = pCVar3;
        AfxSetNewHandler(p_Var2);
        iVar1 = *(int *)((int)this + 0x3c);
        *(void **)(pCVar3 + iVar1) = param_1;
        local_8 = pCVar3;
        if (*(int *)((int)this + 0x40) == 2) {
          *(void **)(pCVar3 + iVar1 + 4) = param_1;
        }
      }
      else {
        iVar1 = *(int *)((int)this + 0x3c);
        *(void **)(local_8 + iVar1) = param_1;
        if (*(int *)((int)this + 0x40) == 2) {
          *(void **)(local_8 + iVar1 + 4) = param_1;
        }
      }
    }
  }
  return local_8;
}


