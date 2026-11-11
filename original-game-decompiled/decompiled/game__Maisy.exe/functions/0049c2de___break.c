
/* ==== __break @ 0049c2de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049c2de-0049c2de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


