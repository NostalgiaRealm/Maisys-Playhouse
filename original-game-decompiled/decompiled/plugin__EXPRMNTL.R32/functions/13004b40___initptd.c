
/* ==== __initptd @ 13004b40 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 13004b40-13004b52
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined **)(_Ptd->_con_ch_buf + 4) = &DAT_13008720;
  _Ptd->_holdrand = 1;
  return;
}


