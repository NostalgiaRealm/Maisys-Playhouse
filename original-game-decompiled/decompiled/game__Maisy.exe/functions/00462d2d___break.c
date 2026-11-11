
/* ==== __break @ 00462d2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00462d2d-00462d2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


