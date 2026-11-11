
/* ==== FID_conflict:__lock_file @ 1102b260 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1102b260-1102b295
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_11036c9c + 3U) < _File) && (_File < (FILE *)0x11036f01)) {
    __lock(((int)(_File + -0x881b65) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


