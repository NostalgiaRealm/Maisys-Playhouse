
/* ==== __break @ 0043f37c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f37c-0043f37c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


