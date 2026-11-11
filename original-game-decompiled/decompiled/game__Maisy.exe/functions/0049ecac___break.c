
/* ==== __break @ 0049ecac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ecac-0049ecac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


