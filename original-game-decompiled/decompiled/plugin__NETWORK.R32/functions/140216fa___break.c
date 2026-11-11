
/* ==== __break @ 140216fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fa-140216fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


