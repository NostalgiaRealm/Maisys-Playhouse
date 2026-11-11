
/* ==== __write @ 0049e5c0 ==== 
 * signature: int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
 * body: 0049e5c0-0049e637
 * note: Library Function - Single Match  __write  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 1998 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_004e6790) &&
     ((*(byte *)(*(int *)((int)&DAT_004e6690 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    DVar1 = __lseek_lk(_FileHandle,(LONG)_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return DVar1;
  }
  piVar2 = FUN_0048f9d0();
  *piVar2 = 9;
  puVar3 = FUN_0048f9e0();
  *puVar3 = 0;
  return -1;
}


