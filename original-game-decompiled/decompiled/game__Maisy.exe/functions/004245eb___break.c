
/* ==== __break @ 004245eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004245eb-004245eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


