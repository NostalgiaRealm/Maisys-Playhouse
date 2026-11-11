
/* ==== FID_conflict:__lock_file @ 00493e40 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 00493e40-00493e75
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x4df10f < _File) && (_File < (FILE *)0x4df371)) {
    __lock(((int)&_File[-0x26f89]._file >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


