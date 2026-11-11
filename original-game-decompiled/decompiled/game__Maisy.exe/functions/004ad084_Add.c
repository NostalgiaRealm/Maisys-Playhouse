
/* ==== CRecentFileList::Add @ 004ad084 ==== 
 * signature: void __thiscall Add(CRecentFileList * this, char * param_1)
 * body: 004ad084-004ad0fc
 * note: Library Function - Single Match  public: virtual void __thiscall CRecentFileList::Add(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CRecentFileList::Add(char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CRecentFileList::Add(CRecentFileList *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_108 [260];
  
  iVar3 = 0;
  AfxFullPath(local_108,param_1);
  if (*(int *)(this + 4) != 1 && -1 < *(int *)(this + 4) + -1) {
    iVar2 = 0;
    do {
      iVar1 = AfxComparePath(*(char **)(*(int *)(this + 8) + iVar2),local_108);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 4) + -1);
  }
  if (0 < iVar3) {
    iVar3 = iVar3 << 2;
    do {
      CString::operator=((CString *)(*(int *)(this + 8) + iVar3),
                         (CString *)(*(int *)(this + 8) + iVar3) + -4);
      iVar3 = iVar3 + -4;
    } while (iVar3 != 0);
  }
  CString::operator=(*(CString **)(this + 8),param_1);
  return;
}


