
/* ==== __read @ 004a14c0 ==== 
 * signature: int __cdecl __read(int _FileHandle, void * _DstBuf, uint _MaxCharCount)
 * body: 004a14c0-004a1537
 * note: Library Function - Single Match  __read  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __read
   
   Library: Visual Studio 1998 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_004e6790) &&
     ((*(byte *)(*(int *)((int)&DAT_004e6690 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = FUN_004a1540(_FileHandle,_DstBuf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_0048f9d0();
  *piVar2 = 9;
  puVar3 = FUN_0048f9e0();
  *puVar3 = 0;
  return -1;
}


