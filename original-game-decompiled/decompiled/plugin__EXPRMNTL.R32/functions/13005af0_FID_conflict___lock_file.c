
/* ==== FID_conflict:__lock_file @ 13005af0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 13005af0-13005b25
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_130087cc + 3U) < _File) && (_File < (FILE *)0x13008a31)) {
    FUN_13005a60(((int)&_File[-0x98043f]._file >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


