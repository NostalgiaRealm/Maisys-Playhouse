
/* ==== __break @ 0049e0cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049e0cf-0049e0cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


