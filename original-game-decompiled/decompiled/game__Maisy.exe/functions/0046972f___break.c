
/* ==== __break @ 0046972f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046972f-0046972f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


