
/* ==== __break @ 1402293d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293d-1402293d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


