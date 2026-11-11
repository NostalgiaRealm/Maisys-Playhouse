
/* ==== CFile::GetStatus @ 004af17e ==== 
 * signature: int __thiscall GetStatus(CFile * this, CFileStatus * param_1)
 * body: 004af17e-004af23f
 * note: Library Function - Single Match  public: int __thiscall CFile::GetStatus(struct CFileStatus &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CFile::GetStatus(struct CFileStatus &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CFile::GetStatus(CFile *this,CFileStatus *param_1)

{
  CFileStatus *pCVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int *piVar6;
  _FILETIME local_20;
  _FILETIME local_18;
  _FILETIME local_10;
  CTime local_8 [4];
  
  _memset(param_1,0,0x118);
  lstrcpynA((LPSTR)(param_1 + 0x12),*(LPCSTR *)(this + 0xc),0x104);
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    BVar3 = GetFileTime(*(HANDLE *)(this + 4),&local_20,&local_18,&local_10);
    if (BVar3 == 0) {
      return 0;
    }
    DVar4 = GetFileSize(*(HANDLE *)(this + 4),(LPDWORD)0x0);
    *(DWORD *)(param_1 + 0xc) = DVar4;
    if (DVar4 == 0xffffffff) {
      return 0;
    }
    param_1[0x10] = (CFileStatus)0x0;
    puVar5 = (undefined4 *)CTime::CTime(local_8,&local_20,-1);
    pCVar1 = param_1 + 8;
    *(undefined4 *)param_1 = *puVar5;
    piVar6 = (int *)CTime::CTime(local_8,&local_18,-1);
    *(int *)pCVar1 = *piVar6;
    piVar6 = (int *)CTime::CTime(local_8,&local_10,-1);
    iVar2 = *piVar6;
    *(int *)(param_1 + 4) = iVar2;
    if (*(int *)param_1 == 0) {
      *(int *)param_1 = iVar2;
    }
    if (*(int *)pCVar1 == 0) {
      *(int *)pCVar1 = iVar2;
    }
  }
  return 1;
}


