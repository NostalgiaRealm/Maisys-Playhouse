
/* ==== __break @ 0043cb7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cb7f-0043cb7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


