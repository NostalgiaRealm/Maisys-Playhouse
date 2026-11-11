
/* ==== __break @ 0046661b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046661b-0046661b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


