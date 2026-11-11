
/* ==== __write @ 11030210 ==== 
 * signature: int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
 * body: 11030210-11030287
 * note: Library Function - Single Match  __write  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 1998 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_1103ab30) &&
     ((*(byte *)(*(int *)((int)&DAT_1103aa30 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = FUN_11030290(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_1102e850();
  *piVar2 = 9;
  puVar3 = FUN_1102e860();
  *puVar3 = 0;
  return -1;
}


