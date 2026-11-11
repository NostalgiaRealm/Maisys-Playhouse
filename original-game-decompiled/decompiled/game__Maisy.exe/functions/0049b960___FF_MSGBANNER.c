
/* ==== __FF_MSGBANNER @ 0049b960 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 0049b960-0049b99c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_004de190 == 1) || ((DAT_004de190 == 0 && (DAT_004de194 == 1)))) {
    FUN_0049b9a0(0xfc);
    if (DAT_004df080 != (code *)0x0) {
      (*DAT_004df080)();
    }
    FUN_0049b9a0(0xff);
  }
  return;
}


