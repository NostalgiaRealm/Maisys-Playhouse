
/* ==== __break @ 004995fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004995fa-004995fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


