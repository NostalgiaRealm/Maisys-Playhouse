
/* ==== __break @ 004995fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004995fe-004995fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


