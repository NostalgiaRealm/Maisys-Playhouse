
/* ==== __break @ 1402067b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067b-1402067b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


