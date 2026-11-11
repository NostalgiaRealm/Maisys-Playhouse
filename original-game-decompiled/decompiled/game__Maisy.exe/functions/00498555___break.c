
/* ==== __break @ 00498555 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498555-00498555
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


