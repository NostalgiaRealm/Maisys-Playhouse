
/* ==== __break @ 14020647 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020647-14020647
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


