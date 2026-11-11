
/* ==== NewNode @ 004a55aa ==== 
 * signature: undefined __thiscall NewNode(void * this, int param_1, int param_2)
 * body: 004a55aa-004a5602
 * note: Library Function - Multiple Matches With Same Base Name  protected: struct CObList::CNode * __thiscall CObList::NewNode(struct CObList::CNode *,struct CObList::CNode *)  protected: struct CPtrList::CNode * __thiscall CPtrList::NewNode(struct CPtrList::CNode *,struct CPtrList::CNode *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: struct CObList::CNode * __thiscall CObList::NewNode(struct CObList::CNode *,struct
   CObList::CNode *)
    protected: struct CPtrList::CNode * __thiscall CPtrList::NewNode(struct CPtrList::CNode *,struct
   CPtrList::CNode *)
   
   Library: Visual Studio 1998 Release */

void __thiscall NewNode(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  CPlex *pCVar4;
  
  piVar1 = (int *)((int)this + 0x10);
  if (*piVar1 == 0) {
    pCVar4 = CPlex::Create((CPlex **)((int)this + 0x14),*(uint *)((int)this + 0x18),0xc);
    iVar2 = *(int *)((int)this + 0x18);
    pCVar4 = pCVar4 + iVar2 * 0xc + -8;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(int *)pCVar4 = *piVar1;
      *piVar1 = (int)pCVar4;
      pCVar4 = pCVar4 + -0xc;
    }
  }
  piVar3 = (int *)*piVar1;
  *piVar1 = *piVar3;
  piVar3[1] = param_1;
  *piVar3 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  piVar3[2] = 0;
  return;
}


