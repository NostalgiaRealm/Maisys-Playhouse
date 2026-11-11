
/* ==== __commit @ 004a1810 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 004a1810-004a18b1
 * note: Library Function - Single Match  __commit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 1998 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_004e6790 <= (uint)_FileHandle) {
LAB_004a189e:
    piVar3 = FUN_0048f9d0();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_004e6690 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_004a189e;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_004a1240(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_004a188f;
    puVar2 = FUN_0048f9e0();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_0048f9d0();
  *piVar3 = 9;
LAB_004a188f:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}


