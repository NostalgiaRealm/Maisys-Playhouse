
/* ==== __break @ 0046eace ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eace-0046eace
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


