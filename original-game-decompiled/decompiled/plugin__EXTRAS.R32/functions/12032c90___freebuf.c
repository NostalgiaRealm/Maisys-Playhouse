
/* ==== __freebuf @ 12032c90 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 12032c90-12032cc8
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 1998 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1202c7c0(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


