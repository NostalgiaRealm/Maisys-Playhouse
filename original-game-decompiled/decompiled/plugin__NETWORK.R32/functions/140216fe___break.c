
/* ==== __break @ 140216fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fe-140216fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


