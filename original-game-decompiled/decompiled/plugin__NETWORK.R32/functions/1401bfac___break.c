
/* ==== __break @ 1401bfac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfac-1401bfac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


