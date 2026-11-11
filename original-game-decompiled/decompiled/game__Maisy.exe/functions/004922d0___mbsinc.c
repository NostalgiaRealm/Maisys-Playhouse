
/* ==== __mbsinc @ 004922d0 ==== 
 * signature: uchar * __cdecl __mbsinc(uchar * _Ptr)
 * body: 004922d0-004922e5
 * note: Library Function - Single Match  __mbsinc  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsinc
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsinc(uchar *_Ptr)

{
  uchar *puVar1;
  
  puVar1 = _Ptr + 1;
  if ((*(byte *)((int)&DAT_004de1f0 + *_Ptr + 1) & 4) != 0) {
    puVar1 = _Ptr + 2;
  }
  return puVar1;
}


