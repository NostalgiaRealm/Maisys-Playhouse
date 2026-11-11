
/* ==== __freebuf @ 11031960 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 11031960-11031998
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 1998 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_11029180(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


