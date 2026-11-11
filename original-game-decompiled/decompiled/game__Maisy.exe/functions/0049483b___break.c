
/* ==== __break @ 0049483b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049483b-0049483b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


