
/* ==== FID_conflict:__lock_file @ 150023a0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 150023a0-150023d5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_150054dc + 3U) < _File) && (_File < (FILE *)0x15005741)) {
    __lock(((int)(_File + -0xa802a7) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


