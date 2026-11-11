
/* ==== FID_conflict:__lock_file @ 1401a6e0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1401a6e0-1401a715
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x14027e7f < _File) && (_File < (FILE *)0x140280e1)) {
    FUN_1401a650(((int)(_File + -0xa013f4) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


