
/* ==== __break @ 0048ec8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ec8d-0048ec8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


