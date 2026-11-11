
/* ==== __break @ 00425aac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425aac-00425aac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


