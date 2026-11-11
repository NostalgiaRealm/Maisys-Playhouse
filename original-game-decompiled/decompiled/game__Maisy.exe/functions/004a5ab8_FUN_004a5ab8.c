
/* ==== FUN_004a5ab8 @ 004a5ab8 ==== 
 * signature: CAssoc * __thiscall FUN_004a5ab8(void * this, void * param_1)
 * body: 004a5ab8-004a5b15
 */

CAssoc * __thiscall FUN_004a5ab8(void *this,void *param_1)

{
  int *piVar1;
  CAssoc *pCVar2;
  uint local_8;
  
  pCVar2 = CMapPtrToPtr::GetAssocAt(this,param_1,&local_8);
  if (pCVar2 == (CAssoc *)0x0) {
    piVar1 = (int *)((int)this + 4);
    if (*piVar1 == 0) {
      CMapPtrToPtr::InitHashTable(this,*(uint *)((int)this + 8),1);
    }
    pCVar2 = (CAssoc *)FUN_004a59ef((int)this);
    *(uint *)(pCVar2 + 4) = local_8;
    *(void **)(pCVar2 + 8) = param_1;
    *(undefined4 *)pCVar2 = *(undefined4 *)(*piVar1 + local_8 * 4);
    *(CAssoc **)(*piVar1 + local_8 * 4) = pCVar2;
  }
  return pCVar2 + 0xc;
}


