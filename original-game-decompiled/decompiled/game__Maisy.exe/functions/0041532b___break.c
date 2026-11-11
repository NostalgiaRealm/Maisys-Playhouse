
/* ==== __break @ 0041532b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041532b-0041532b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


