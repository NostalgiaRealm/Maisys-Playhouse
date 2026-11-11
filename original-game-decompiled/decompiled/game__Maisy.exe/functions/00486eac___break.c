
/* ==== __break @ 00486eac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486eac-00486eac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


