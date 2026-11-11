
/* ==== CMapStringToPtr::operator[] @ 004a5e87 ==== 
 * signature: void * * __thiscall operator[](CMapStringToPtr * this, char * param_1)
 * body: 004a5e87-004a5eef
 * note: Library Function - Single Match  public: void * & __thiscall CMapStringToPtr::operator[](char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void * & __thiscall CMapStringToPtr::operator[](char const *)
   
   Library: Visual Studio 1998 Release */

void ** __thiscall CMapStringToPtr::operator[](CMapStringToPtr *this,char *param_1)

{
  CMapStringToPtr *pCVar1;
  int *piVar2;
  uint local_8;
  
  piVar2 = GetAssocAt(this,(uchar *)param_1,&local_8);
  if (piVar2 == (int *)0x0) {
    pCVar1 = this + 4;
    if (*(int *)pCVar1 == 0) {
      InitHashTable(this,*(int *)(this + 8),1);
    }
    piVar2 = NewAssoc((int)this);
    piVar2[1] = local_8;
    CString::operator=((CString *)(piVar2 + 2),param_1);
    *piVar2 = *(int *)(*(int *)pCVar1 + local_8 * 4);
    *(int **)(*(int *)pCVar1 + local_8 * 4) = piVar2;
  }
  return (void **)(piVar2 + 3);
}


