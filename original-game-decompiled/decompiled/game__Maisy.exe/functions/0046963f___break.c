
/* ==== __break @ 0046963f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046963f-0046963f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


