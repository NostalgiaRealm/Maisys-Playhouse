
/* ==== __break @ 004799fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799fb-004799fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


