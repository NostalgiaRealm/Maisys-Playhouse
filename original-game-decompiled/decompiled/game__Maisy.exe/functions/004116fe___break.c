
/* ==== __break @ 004116fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004116fe-004116fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


