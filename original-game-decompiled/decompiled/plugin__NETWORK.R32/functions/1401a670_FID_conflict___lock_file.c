
/* ==== FID_conflict:__lock_file @ 1401a670 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1401a670-1401a6a5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x14027e7f < _File) && (_File < (FILE *)0x140280e1)) {
    __lock(((int)(_File + -0xa013f4) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


