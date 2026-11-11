
/* ==== __break @ 0049aeda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aeda-0049aeda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


