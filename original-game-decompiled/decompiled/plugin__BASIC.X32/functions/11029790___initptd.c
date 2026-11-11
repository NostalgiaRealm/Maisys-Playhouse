
/* ==== __initptd @ 11029790 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 11029790-110297a2
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined4 **)(_Ptd->_con_ch_buf + 4) = &DAT_110369a0;
  _Ptd->_holdrand = 1;
  return;
}


