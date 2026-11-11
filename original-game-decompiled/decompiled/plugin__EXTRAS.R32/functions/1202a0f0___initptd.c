
/* ==== __initptd @ 1202a0f0 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 1202a0f0-1202a102
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined4 **)(_Ptd->_con_ch_buf + 4) = &DAT_120384c8;
  _Ptd->_holdrand = 1;
  return;
}


