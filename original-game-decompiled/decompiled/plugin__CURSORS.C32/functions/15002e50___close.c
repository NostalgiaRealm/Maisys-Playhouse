
/* ==== __close @ 15002e50 ==== 
 * signature: int __cdecl __close(int _FileHandle)
 * body: 15002e50-15002ebd
 * note: Library Function - Single Match  __close  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 1998 Release */

int __cdecl __close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_15006b50) &&
     ((*(byte *)(*(int *)((int)&DAT_15006a50 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 9;
  puVar3 = FUN_15003020();
  *puVar3 = 0;
  return -1;
}


