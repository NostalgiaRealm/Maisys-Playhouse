
/* ==== CFile::Duplicate @ 004adad2 ==== 
 * signature: CFile * __thiscall Duplicate(CFile * this)
 * body: 004adad2-004adb73
 * note: Library Function - Single Match  public: virtual class CFile * __thiscall CFile::Duplicate(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CFile * __thiscall CFile::Duplicate(void)const 
   
   Library: Visual Studio 1998 Release */

CFile * __thiscall CFile::Duplicate(CFile *this)

{
  int iVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  int extraout_ECX;
  int unaff_EBP;
  CFile *pCVar2;
  undefined4 *unaff_FS_OFFSET;
  HANDLE hSourceHandle;
  LPHANDLE lpTargetHandle;
  DWORD DVar3;
  BOOL BVar4;
  DWORD dwOptions;
  char *pcVar5;
  
  FUN_004919ec();
  iVar1 = FUN_004a5fed(0x10);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  pCVar2 = (CFile *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    pCVar2 = (CFile *)FUN_004ad8f3();
  }
  dwOptions = 2;
  lpTargetHandle = (LPHANDLE)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  BVar4 = 0;
  DVar3 = 0;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(extraout_ECX + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar4 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar3,BVar4,dwOptions);
  if (BVar4 == 0) {
    if (pCVar2 != (CFile *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
    pcVar5 = (char *)0x0;
    DVar3 = GetLastError();
    CFileException::ThrowOsError(DVar3,pcVar5);
  }
  *(int *)(pCVar2 + 4) = *(int *)(unaff_EBP + -0x14);
  *(int *)(pCVar2 + 8) = *(int *)(extraout_ECX + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar2;
}


