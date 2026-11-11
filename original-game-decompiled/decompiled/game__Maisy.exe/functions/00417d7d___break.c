
/* ==== __break @ 00417d7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417d7d-00417d7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


