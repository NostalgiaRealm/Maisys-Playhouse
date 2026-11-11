
/* ==== __break @ 1402293c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293c-1402293c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


