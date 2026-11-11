
/* ==== __break @ 0046970e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046970e-0046970e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


