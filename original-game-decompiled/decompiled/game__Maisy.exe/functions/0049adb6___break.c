
/* ==== __break @ 0049adb6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adb6-0049adb6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


