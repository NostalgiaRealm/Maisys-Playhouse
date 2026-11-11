
/* ==== __break @ 0041532a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041532a-0041532a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


