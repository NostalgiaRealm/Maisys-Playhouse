
/* ==== __break @ 00489fac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489fac-00489fac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


