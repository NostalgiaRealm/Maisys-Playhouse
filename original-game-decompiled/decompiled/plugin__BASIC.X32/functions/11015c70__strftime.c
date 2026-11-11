
/* ==== _strftime @ 11015c70 ==== 
 * signature: size_t __cdecl _strftime(char * _Buf, size_t _SizeInBytes, char * _Format, tm * _Tm)
 * body: 11015c70-11015c8e
 * note: Library Function - Single Match  _strftime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 1998 Release */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = FUN_11015c90((int)_Buf,_SizeInBytes,(int)_Format,(short *)_Tm,'\0');
  return sVar1;
}


