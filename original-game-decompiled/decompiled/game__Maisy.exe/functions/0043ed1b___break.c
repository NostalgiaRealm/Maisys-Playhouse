
/* ==== __break @ 0043ed1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ed1b-0043ed1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


