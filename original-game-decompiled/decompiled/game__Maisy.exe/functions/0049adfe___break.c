
/* ==== __break @ 0049adfe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adfe-0049adfe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


