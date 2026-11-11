
/* ==== __break @ 140216fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fd-140216fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


