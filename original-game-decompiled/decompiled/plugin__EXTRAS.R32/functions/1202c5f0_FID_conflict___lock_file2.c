
/* ==== FID_conflict:__lock_file2 @ 1202c5f0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 1202c5f0-1202c617
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_1202c520(_Index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


