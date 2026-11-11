
/* ==== __break @ 00458899 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458899-00458899
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


