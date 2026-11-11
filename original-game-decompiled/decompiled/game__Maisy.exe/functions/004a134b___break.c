
/* ==== __break @ 004a134b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a134b-004a134b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


