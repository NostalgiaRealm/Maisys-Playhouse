
/* ==== __break @ 00417fac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417fac-00417fac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


