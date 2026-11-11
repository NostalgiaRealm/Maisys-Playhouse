
/* ==== __break @ 0046f18f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046f18f-0046f18f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


