
/* ==== __break @ 0046eacd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eacd-0046eacd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


