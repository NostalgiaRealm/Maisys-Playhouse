
/* ==== __break @ 00460615 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00460615-00460615
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


