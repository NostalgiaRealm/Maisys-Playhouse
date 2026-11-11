
/* ==== __break @ 0048e0bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e0bb-0048e0bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


