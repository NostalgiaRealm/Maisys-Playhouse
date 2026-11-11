
/* ==== __break @ 0043930d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043930d-0043930d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


