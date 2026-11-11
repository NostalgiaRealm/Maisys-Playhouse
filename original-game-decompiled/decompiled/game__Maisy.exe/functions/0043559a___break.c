
/* ==== __break @ 0043559a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043559a-0043559a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


