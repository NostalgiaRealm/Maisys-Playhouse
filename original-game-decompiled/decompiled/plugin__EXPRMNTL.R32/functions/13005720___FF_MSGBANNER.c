
/* ==== __FF_MSGBANNER @ 13005720 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 13005720-1300575c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_13008334 == 1) || ((DAT_13008334 == 0 && (DAT_13008338 == 1)))) {
    FUN_13005760(0xfc);
    if (DAT_13008658 != (code *)0x0) {
      (*DAT_13008658)();
    }
    FUN_13005760(0xff);
  }
  return;
}


