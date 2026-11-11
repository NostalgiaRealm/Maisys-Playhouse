
/* ==== FID_conflict:__lock_file @ 1202c5b0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1202c5b0-1202c5e5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_12038714 + 3U) < _File) && (_File < (FILE *)0x12038979)) {
    FUN_1202c520(((int)&_File[-0x901c39]._base >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


