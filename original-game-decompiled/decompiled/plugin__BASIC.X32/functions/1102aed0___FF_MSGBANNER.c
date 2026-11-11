
/* ==== __FF_MSGBANNER @ 1102aed0 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 1102aed0-1102af0c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_11036590 == 1) || ((DAT_11036590 == 0 && (DAT_11036594 == 1)))) {
    FUN_1102af10(0xfc);
    if (DAT_110368d8 != (code *)0x0) {
      (*DAT_110368d8)();
    }
    FUN_1102af10(0xff);
  }
  return;
}


