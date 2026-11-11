
/* ==== __break @ 0046f18d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046f18d-0046f18d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


