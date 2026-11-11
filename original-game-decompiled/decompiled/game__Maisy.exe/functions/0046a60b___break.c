
/* ==== __break @ 0046a60b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a60b-0046a60b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


