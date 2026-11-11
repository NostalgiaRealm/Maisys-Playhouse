
/* ==== __break @ 00442c0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c0a-00442c0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


