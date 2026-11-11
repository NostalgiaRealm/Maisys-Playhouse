
/* ==== __break @ 00486aac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aac-00486aac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


