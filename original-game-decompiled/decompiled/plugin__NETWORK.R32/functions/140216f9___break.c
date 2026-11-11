
/* ==== __break @ 140216f9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216f9-140216f9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


