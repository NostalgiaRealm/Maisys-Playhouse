
/* ==== __break @ 0040eefc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eefc-0040eefc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


