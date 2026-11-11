
/* ==== __break @ 1401c85a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85a-1401c85a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


