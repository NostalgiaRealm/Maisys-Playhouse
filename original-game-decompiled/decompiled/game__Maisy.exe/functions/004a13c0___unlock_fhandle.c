
/* ==== __unlock_fhandle @ 004a13c0 ==== 
 * signature: void __cdecl __unlock_fhandle(int _Filehandle)
 * body: 004a13c0-004a13e7
 * note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 1998 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_004e6690 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}


