
/* ==== __break @ 0043cb7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cb7c-0043cb7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


