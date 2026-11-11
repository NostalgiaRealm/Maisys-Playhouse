
/* ==== __FF_MSGBANNER @ 1401bc70 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 1401bc70-1401bcac
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_14026e4c == 1) || ((DAT_14026e4c == 0 && (DAT_14026e50 == 1)))) {
    FUN_1401bcb0(0xfc);
    if (DAT_140275f8 != (code *)0x0) {
      (*DAT_140275f8)();
    }
    FUN_1401bcb0(0xff);
  }
  return;
}


