
/* ==== __break @ 0040fb6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb6a-0040fb6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


