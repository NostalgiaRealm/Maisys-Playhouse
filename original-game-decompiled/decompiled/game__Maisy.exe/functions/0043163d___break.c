
/* ==== __break @ 0043163d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043163d-0043163d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


