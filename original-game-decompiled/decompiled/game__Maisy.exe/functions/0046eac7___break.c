
/* ==== __break @ 0046eac7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eac7-0046eac7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


