
/* ==== CPtrList::RemoveHead @ 004a56e4 ==== 
 * signature: void * __thiscall RemoveHead(CPtrList * this)
 * body: 004a56e4-004a570d
 * note: Library Function - Single Match  public: void * __thiscall CPtrList::RemoveHead(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void * __thiscall CPtrList::RemoveHead(void)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CPtrList::RemoveHead(CPtrList *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  pvVar2 = (void *)piVar1[2];
  iVar3 = *piVar1;
  *(int *)(this + 4) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  FreeNode(this,piVar1);
  return pvVar2;
}


