
/* ==== __break @ 004736e7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004736e7-004736e7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


