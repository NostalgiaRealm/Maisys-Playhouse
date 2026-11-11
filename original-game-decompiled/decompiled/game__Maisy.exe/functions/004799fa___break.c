
/* ==== __break @ 004799fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799fa-004799fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


