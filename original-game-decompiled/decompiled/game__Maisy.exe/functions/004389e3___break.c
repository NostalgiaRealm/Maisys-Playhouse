
/* ==== __break @ 004389e3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389e3-004389e3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


