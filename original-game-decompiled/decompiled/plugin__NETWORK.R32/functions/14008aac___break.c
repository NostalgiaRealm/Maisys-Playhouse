
/* ==== __break @ 14008aac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aac-14008aac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


