
/* ==== FID_conflict:__lock_file2 @ 1202c580 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 1202c580-1202c5a7
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


