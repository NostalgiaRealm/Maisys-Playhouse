
/* ==== __break @ 004695ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ba-004695ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


