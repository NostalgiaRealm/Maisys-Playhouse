
/* ==== CFile::Open @ 004adb87 ==== 
 * signature: int __thiscall Open(CFile * this, char * param_1, uint param_2, CFileException * param_3)
 * body: 004adb87-004adcc8
 * note: Library Function - Single Match  public: virtual int __thiscall CFile::Open(char const *,unsigned int,class CFileException *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CFile::Open(char const *,unsigned int,class CFileException *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFile::Open(CFile *this,char *param_1,uint param_2,CFileException *param_3)

{
  DWORD dwShareMode;
  uint uVar1;
  DWORD dwCreationDisposition;
  HANDLE pvVar2;
  DWORD DVar3;
  int iVar4;
  char local_114 [260];
  _SECURITY_ATTRIBUTES local_10;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  FUN_004abc24((CString *)(this + 0xc));
  AfxFullPath(local_114,param_1);
  CString::operator=((CString *)(this + 0xc),local_114);
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    DVar3 = 0x80000000;
  }
  else if (uVar1 == 1) {
    DVar3 = 0x40000000;
  }
  else {
    DVar3 = local_10.bInheritHandle;
    if (uVar1 == 2) {
      DVar3 = 0xc0000000;
    }
  }
  uVar1 = param_2 & 0x70;
  if ((uVar1 == 0) || (uVar1 == 0x10)) {
    local_10.bInheritHandle = 0;
  }
  else if (uVar1 == 0x20) {
    local_10.bInheritHandle = 1;
  }
  else if (uVar1 == 0x30) {
    local_10.bInheritHandle = 2;
  }
  else if (uVar1 == 0x40) {
    local_10.bInheritHandle = 3;
  }
  local_10.nLength = 0xc;
  local_10.lpSecurityDescriptor = (LPVOID)0x0;
  if ((param_2 & 0x1000) == 0) {
    dwCreationDisposition = 3;
  }
  else {
    dwCreationDisposition = (-(uint)((param_2 & 0x2000) == 0) & 0xfffffffe) + 4;
  }
  dwShareMode = local_10.bInheritHandle;
  local_10.bInheritHandle = (uint)((param_2 & 0x80) == 0);
  pvVar2 = CreateFileA(param_1,DVar3,dwShareMode,&local_10,dwCreationDisposition,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    if (param_3 != (CFileException *)0x0) {
      DVar3 = GetLastError();
      *(DWORD *)(param_3 + 0xc) = DVar3;
      iVar4 = CFileException::OsErrorToException(DVar3);
      *(int *)(param_3 + 8) = iVar4;
      CString::operator=((CString *)(param_3 + 0x10),param_1);
    }
    iVar4 = 0;
  }
  else {
    *(HANDLE *)(this + 4) = pvVar2;
    iVar4 = 1;
    *(undefined4 *)(this + 8) = 1;
  }
  return iVar4;
}


