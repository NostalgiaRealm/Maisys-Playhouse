
/* ==== __break @ 0042973a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042973a-0042973a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


