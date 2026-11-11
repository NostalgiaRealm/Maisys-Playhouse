
/* ==== _strftime @ 11016890 ==== 
 * signature: size_t __cdecl _strftime(char * _Buf, size_t _SizeInBytes, char * _Format, tm * _Tm)
 * body: 11016890-110168ae
 * note: Library Function - Single Match  _strftime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 1998 Release */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = FUN_11016700((undefined4 *)_Buf,_SizeInBytes,(int)_Format,(short *)_Tm,'\0');
  return sVar1;
}


