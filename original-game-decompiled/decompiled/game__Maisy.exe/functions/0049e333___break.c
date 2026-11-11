
/* ==== __break @ 0049e333 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e333-0049e333
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


