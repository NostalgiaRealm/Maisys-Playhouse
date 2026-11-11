
/* ==== __break @ 004246be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004246be-004246be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


