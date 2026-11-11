
/* ==== __break @ 0041167a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041167a-0041167a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


