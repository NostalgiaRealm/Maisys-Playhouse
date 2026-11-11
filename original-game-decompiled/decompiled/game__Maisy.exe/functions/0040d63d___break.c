
/* ==== __break @ 0040d63d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040d63d-0040d63d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


