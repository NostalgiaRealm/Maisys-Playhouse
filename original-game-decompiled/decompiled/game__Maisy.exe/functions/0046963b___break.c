
/* ==== __break @ 0046963b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046963b-0046963b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


