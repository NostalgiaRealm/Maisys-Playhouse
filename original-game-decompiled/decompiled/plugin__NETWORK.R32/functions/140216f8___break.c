
/* ==== __break @ 140216f8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216f8-140216f8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


