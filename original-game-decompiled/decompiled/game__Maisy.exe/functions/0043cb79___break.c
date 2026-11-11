
/* ==== __break @ 0043cb79 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cb79-0043cb79
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


