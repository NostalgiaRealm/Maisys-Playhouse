
/* ==== __FF_MSGBANNER @ 1202b0b0 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 1202b0b0-1202b0ec
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_12037e60 == 1) || ((DAT_12037e60 == 0 && (DAT_12037e64 == 1)))) {
    FUN_1202b0f0(0xfc);
    if (DAT_120381b0 != (code *)0x0) {
      (*DAT_120381b0)();
    }
    FUN_1202b0f0(0xff);
  }
  return;
}


