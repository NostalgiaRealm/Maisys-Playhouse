
/* ==== __break @ 0041121a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041121a-0041121a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


