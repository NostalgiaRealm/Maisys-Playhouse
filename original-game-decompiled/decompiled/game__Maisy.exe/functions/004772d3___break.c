
/* ==== __break @ 004772d3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772d3-004772d3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


