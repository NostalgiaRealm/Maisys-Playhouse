
/* ==== __break @ 004772da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772da-004772da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


