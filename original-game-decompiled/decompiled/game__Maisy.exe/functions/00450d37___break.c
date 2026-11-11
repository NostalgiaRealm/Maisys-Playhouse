
/* ==== __break @ 00450d37 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450d37-00450d37
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


