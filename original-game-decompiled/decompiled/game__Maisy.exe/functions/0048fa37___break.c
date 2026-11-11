
/* ==== __break @ 0048fa37 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fa37-0048fa37
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


