
/* ==== __break @ 0049e17f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e17f-0049e17f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


