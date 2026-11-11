
/* ==== __break @ 0046061b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046061b-0046061b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


