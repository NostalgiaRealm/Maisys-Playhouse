
/* ==== __break @ 0049aede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aede-0049aede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


