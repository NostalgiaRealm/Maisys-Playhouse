
/* ==== __break @ 00498558 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498558-00498558
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


