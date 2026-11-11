
/* ==== __break @ 0049bdfb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049bdfb-0049bdfb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


