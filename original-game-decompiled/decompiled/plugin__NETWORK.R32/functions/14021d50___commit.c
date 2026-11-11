
/* ==== __commit @ 14021d50 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 14021d50-14021df1
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
  
  if (DAT_14029f70 <= (uint)_FileHandle) {
LAB_14021dde:
    piVar3 = FUN_14021040();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_14029e70 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_14021dde;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_14022830(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_14021dcf;
    puVar2 = FUN_14021050();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_14021040();
  *piVar3 = 9;
LAB_14021dcf:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}


