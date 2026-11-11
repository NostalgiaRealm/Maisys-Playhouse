
/* ==== __break @ 0049e0cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e0cc-0049e0cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


