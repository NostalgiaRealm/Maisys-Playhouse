
/* ==== __break @ 0049c3bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049c3bf-0049c3bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


