
/* ==== __commit @ 11030160 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 11030160-11030201
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
  
  if (DAT_1103ab30 <= (uint)_FileHandle) {
LAB_110301ee:
    piVar3 = FUN_1102e850();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_1103aa30 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_110301ee;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_11031c30(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_110301df;
    puVar2 = FUN_1102e860();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_1102e850();
  *piVar3 = 9;
LAB_110301df:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}


