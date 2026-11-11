
/* ==== __break @ 00462d2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00462d2a-00462d2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


