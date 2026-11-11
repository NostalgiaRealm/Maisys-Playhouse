
/* ==== __break @ 0049ecae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ecae-0049ecae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


