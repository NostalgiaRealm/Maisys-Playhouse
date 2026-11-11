
/* ==== __FF_MSGBANNER @ 15002040 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 15002040-1500207c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_15005040 == 1) || ((DAT_15005040 == 0 && (DAT_15005044 == 1)))) {
    FUN_15002080(0xfc);
    if (DAT_15005368 != (code *)0x0) {
      (*DAT_15005368)();
    }
    FUN_15002080(0xff);
  }
  return;
}


