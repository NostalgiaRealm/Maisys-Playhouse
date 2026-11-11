
/* ==== __break @ 004792fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004792fa-004792fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


