
/* ==== __break @ 0049855b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049855b-0049855b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


